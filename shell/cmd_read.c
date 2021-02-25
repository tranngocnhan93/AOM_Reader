#include <shell/cmd_read.h>
#include <stdlib.h>
#include <string.h>
#include "hal.h"
#include "chprintf.h"
#include "shellcommands.h"

void cmd_read(BaseSequentialStream *chp, int argc, char *argv[])
{
  (void) argv;
  (void) argc;

  uint32_t channel;


  if (argc == 2)
  {
    if (strcmp(argv[0], "voltage") == 0)
    {
      channel = strtol(argv[1], NULL, 10);
      if (channel >= 1 && channel <= 4)
      {

      }
      else chprintf(chp, "Channel must be from 1 to 4\n\r");
    }
    else if (strcmp(argv[0], "current") == 0)
    {
      channel = strtol(argv[1], NULL, 10);
      if (channel >= 1 && channel <= 4)
      {

      }
      else chprintf(chp, "Channel must be from 1 to 4\n\r");
    }
    else if (strcmp(argv[0], "pwm") == 0)
    {
      channel = strtol(argv[1], NULL, 10);
      if (channel == 1 || channel == 2)
      {

      }
      else chprintf(chp, "Channel must be either 1 or 2\n\r");
    }
    else
    {
      chprintf(chp, "Incorrect first argument\n\r");
      chprintf(chp, "USAGE: read voltage {channel(1-4)}\n\r");
      chprintf(chp, "       read current {channel(1-4)}\n\r");
      chprintf(chp, "       read pwm {channel(1|2)}\n\r");
    }
  }
  else
  {
    chprintf(chp, "USAGE: read voltage {channel(1-4)}\n\r");
    chprintf(chp, "       read current {channel(1-4)}\n\r");
    chprintf(chp, "       read pwm {channel(1|2)}\n\r");
  }
}



