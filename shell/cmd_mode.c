#include <stdlib.h>
#include <string.h>
#include "hal.h"
#include "chprintf.h"
#include "shellcommands.h"
#include "ch.h"
#include "helpers.h"
#define TRUE 1
#define FALSE 0
#define ERROR -1


//SPI TX and RX buffers.
static uint8_t rxbuf[4] = {0};
static const uint8_t analog_cfg[4]  = {135, 0, 0, 0}; //0b10000111 single-ended, FSR bipolar +-3Vref, channel 0
static const uint8_t mode_select[4] = {136, 0, 0, 0}; //0b10001000 mode 0 (external clock mode)
static const uint8_t start_conv[4]  = {128, 0, 0, 0}; //0b10000000 start conversion for default channel 0

//Low speed SPI configuration (2MHz, CPHA=0, CPOL=0, MSb first).
static const SPIConfig spicfg = {
  NULL,
  GPIOA,
  4,                /* CS: A4 */
  SPI_CR1_BR_2,     /* PCLK/8 */
  0
};

enum AOM_mode {voltagemode, currentmode, nosignal};


void sel_MUXch(unsigned short channel);
void en_analogSW(unsigned short sw);
int readADC(void);
int getmode(unsigned short channel, BaseSequentialStream *chp);


void cmd_getmode(BaseSequentialStream *chp, int argc, char *argv[])
{
    enum AOM_mode chxmode[4];

    for(int i = 1; i < 5; i++)
    {
        chxmode[i-1] = getmode(i, chp);
    }
}


/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Get operating mode of an AOM channel
//!
//!
//! @param unsigned short: AOM channel number (1-4)
//!
//! @return int: enum current/voltage mode
//
/**************************************************************************************************/
int getmode(unsigned short channel, BaseSequentialStream *chp)
{
    int millivolt, lastmvolt;

    sel_MUXch(channel);
    //Asume current mode, enable 20 kOhm resistor
    en_analogSW(4);
    millivolt = readADC();
    chThdSleepMilliseconds(1000);
    millivolt = readADC();
    lastmvolt = millivolt;

    if(checkhigher(millivolt, 10000, 50) == TRUE || checklower(millivolt, -10000, 50) == TRUE)
    {
        chprintf(chp, "\n\rgetmode: first voltage %d\n\r", millivolt);
        chprintf(chp, "getmode: Current mode detected at channel %d\n\r", channel);
        return currentmode;
    }
    else //Can either be current or voltage mode
    {
        //Enable 10 kOhm resistor
        en_analogSW(2);
        millivolt = readADC();
        chThdSleepMilliseconds(1000);
        millivolt = readADC();


        chprintf(chp, "\n\rgetmode: last voltage %d\n\r", lastmvolt);
        chprintf(chp, "getmode: curr voltage %d\n\r", millivolt);
        if(checkequal(millivolt, lastmvolt, 5) == TRUE)
        {
            chprintf(chp, "getmode: Voltage mode detected at channel %d\n\r", channel);
            return voltagemode;
        }
        else
        {
            chprintf(chp, "getmode: Current mode detected at channel %d\n\r", channel);
            return currentmode;
        }
    }
}

/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Select a MUX channel to connect to the corresponding AOM channel
//!
//!
//! @param unsigned short: channel number (1-4)
//!
//! @return none
//
/**************************************************************************************************/
void sel_MUXch(unsigned short channel)
{
    switch(channel)
    {
        case 1:
            palClearLine(LINE_AOM_ch_sel1);
            palClearLine(LINE_AOM_ch_sel2);
            break;
        case 2:
            palSetLine(LINE_AOM_ch_sel1);
            palClearLine(LINE_AOM_ch_sel2);
            break;
        case 3:
            palClearLine(LINE_AOM_ch_sel1);
            palSetLine(LINE_AOM_ch_sel2);
            break;
        case 4:
            palSetLine(LINE_AOM_ch_sel1);
            palSetLine(LINE_AOM_ch_sel2);
            break;
        default:
            break;
    }
    palSetLine(LINE_MUX_EN);
}

/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Enable an anlalog switch to connect to a preferred resistor
//!
//!
//! @param unsigned short: analog switch number (1-4)
//!
//! @return none
//
/**************************************************************************************************/
void en_analogSW(unsigned short sw)
{
    switch(sw)
    {
        case 1:
            palClearLine(LINE_SW2);
            palClearLine(LINE_SW3);
            palClearLine(LINE_SW4);
            palSetLine(LINE_SW1);
            break;
        case 2:
            palClearLine(LINE_SW1);
            palClearLine(LINE_SW3);
            palClearLine(LINE_SW4);
            palSetLine(LINE_SW2);
            break;
        case 3:
            palClearLine(LINE_SW1);
            palClearLine(LINE_SW2);
            palClearLine(LINE_SW4);
            palSetLine(LINE_SW3);
            break;
        case 4:
            palClearLine(LINE_SW1);
            palClearLine(LINE_SW2);
            palClearLine(LINE_SW3);
            palSetLine(LINE_SW4);
            break;
        default:
            break;
    }
}

/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Read voltage at ADC channel 0
//!
//! Precondition: the MUX channel and analog switch must be enabled in advance
//! @param none
//!
//! @return int: voltage (mV)
//
/**************************************************************************************************/
int readADC(void)
{
    float voltage;
    int misocode, signedcode, millivolt;

    spiAcquireBus(&SPID1);                          /* Acquire ownership of the bus.    */
    spiStart(&SPID1, &spicfg);                      /* Setup transfer parameters.       */

    spiSelect(&SPID1);                              /* Slave Select assertion.          */
    spiSend(&SPID1, 1, analog_cfg);                 /* Send analog input configuration  */
    spiUnselect(&SPID1);                            /* Slave Select de-assertion.       */

    spiSelect(&SPID1);
    spiSend(&SPID1, 1, mode_select);                /* Send mode selection byte         */
    spiUnselect(&SPID1);

    spiSelect(&SPID1);
    spiExchange(&SPID1, 4, start_conv, rxbuf);      /* Atomic transfer operations.      */
    spiUnselect(&SPID1);
    spiReleaseBus(&SPID1);                          /* Ownership release.               */

    misocode = rxbuf[2] << 8;
    misocode |= rxbuf[3];

    signedcode = misocode - 32768;
    voltage = signedcode * 6 * 4.096 / 65535;
    millivolt = (int) (voltage * 1000);

    return millivolt;
}
