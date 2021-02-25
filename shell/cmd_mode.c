#include <stdlib.h>
#include <string.h>
#include "hal.h"
#include "chprintf.h"
#include "shellcommands.h"
#include "ch.h"
#include "helpers.h"


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

void sel_MUX_ch(int channel);
void en_SW(int sw);
int readADC(void);

void cmd_getmode(BaseSequentialStream *chp, int argc, char *argv[])
{
    int millivolt, lastmvolt;
    uint8_t mode;

    //Select MUX channel 1
    sel_MUX_ch(1);

    //Asume current mode, enable 20 kOhm resistor
    en_SW(4);
    millivolt = readADC();
    lastmvolt = millivolt;
    //Enable 10 kOhm resistor
//    en_SW(2);
//    millivolt = readADC();


    chprintf(chp, "getmode millivolt : %d\n\r", millivolt);

    if(checkhigher(millivolt, 10000, 5) == 1)
    {
      chprintf(chp, "getmode This is current mode\n\r");
    }
    else chprintf(chp, "getmode This is voltage mode\n\r");

    if(checkequal(millivolt, 5000, 100) == 1)
    {
        chprintf(chp, "getmode the voltage is equal to 5V\n\r");
    }
    else chprintf(chp, "getmode the voltage is NOT equal to 5V\n\r");

}


void sel_MUX_ch(int channel)
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
    }
    palSetLine(LINE_MUX_EN);
}

void en_SW(int sw)
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
    }
}

/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Read voltage at ADC channel 0
//!
//!
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

//    chprintf(chp, "getmode rxbuf: %x\t%x\t%x\t%x\n\r", rxbuf[0], rxbuf[1], rxbuf[2], rxbuf[3]);
//    chprintf(chp, "getmode volt : %d\t%2.3f\n\r", signedcode, voltage);

    return millivolt;
}
