#include <stdlib.h>
#include <string.h>

#include "hal.h"
#include "ch.h"
#include "chprintf.h"
#include "shell.h"

#include "helpers.h"
#include "shellcommands.h"



int main(void)
{
      halInit();
      chSysInit();

      sdStart(&SD3, NULL);  /* Serial console in USART3, 115200 */
      consoleStream = (BaseSequentialStream *) &SD3;

      PRINT("\n\n\r----------------------------------------------\n\r");
      PRINT("\n\rEKE AOM Signal Reader\n\r");
      PRINT("----------------------------------------------\n\r");

      shellInit();
      chThdCreateFromHeap(NULL, SHELL_WA_SIZE, "shell", NORMALPRIO + 1, shellThread, (void *)&shell_cfg_uart);
      chThdSleepMilliseconds(10);        // Wait for power-up

      while (true)
      {
          chThdSleepMilliseconds(1000);
          palToggleLine(LINE_DEBUG_LED1);

      }
}
