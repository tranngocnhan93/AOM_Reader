/*
 * dino.c
 *
 *  Created on: Nov 30, 2017
 *      Author: marco.valimaki
 */

#include <stdlib.h>
#include <string.h>
#include "cmd_dino.h"
#include "hal.h"
#include "chprintf.h"
#include "shellcommands.h"

void cmd_dino(BaseSequentialStream *chp, int argc, char *argv[])
{
    (void) argv;
    (void) argc;

    uint32_t interval;
    uint32_t current;
    uint32_t stime, rtime;

    if (argc == 1)
    {
      if (strcmp(argv[0], "start") == 0)
      {
        chprintf(chp, "Starting dino...\n\r");
//        gptStartContinuous(&GPTD8, dino_interval);
        dino_running = -1;
      }
      else if (strcmp(argv[0], "stop") == 0)
      {
        chprintf(chp, "Stopping dino...\n\r");
//        gptStopTimer(&GPTD8);
        dino_running = 0;
      }
      else if (strcmp(argv[0], "get") == 0)
      {
        chprintf(chp, "Dino is %s\n\r", dino_running ? "running" : "stopped");
        chprintf(chp, "Interval set to     %d ms\n\r", dino_interval/100);
        chprintf(chp, "Current set to      %d mA\n\r", dino_current);
        chprintf(chp, "Sample delay set to %d ms\n\r", dino_samdelay);
        chprintf(chp, "Relax time set to   %d ms\n\r", dino_disdelay);
      }
      if (strcmp(argv[0], "report") == 0)
      {
        chprintf(chp, "Reporter is %s\n\r", dino_report ? "on" : "off");
      }
    }
    else if (argc == 2)
    {
      if (strcmp(argv[0], "interval") == 0)
      {
        interval = strtol(argv[1], NULL, 10);
        if(interval < 12)
        {
          interval = 12;
          chprintf(chp, "Minimum value is 12\n\r");
        }
        if(interval > 500)
        {
          interval = 500;
          chprintf(chp, "Maximum value is 500\n\r");
        }

        uint16_t check = 2+(4*dino_samdelay)+(4*dino_disdelay);
        if(check < 12) check = 12;
        if(check <= interval)
        {
          dino_interval = interval*100;
        }
        else
        {
          chprintf(chp, "Value too low...\n\r");
          dino_interval = check*100;
        }

        chprintf(chp, "Interval set to     %d ms\n\r", dino_interval/100);
        if(dino_running)
        {
//          gptStopTimer(&GPTD8);
 //         gptStartContinuous(&GPTD8, dino_interval);
        }
      }
      else if(strcmp(argv[0], "report") == 0)
      {
        if(strcmp(argv[1], "on") == 0)
        {
          dino_report = -1;
          chprintf(chp, "Reporter is %s\n\r", dino_report ? "on" : "off");
        }
        else if(strcmp(argv[1], "off") == 0)
        {
          dino_report = 0;
          chprintf(chp, "Reporter is %s\n\r", dino_report ? "on" : "off");
        }
      }
    }
    else if(argc > 2)
    {
      if(strcmp(argv[0], "set") == 0)
      {
        current = strtol(argv[1], NULL, 10);
        stime = strtol(argv[2], NULL, 10);
        rtime = strtol(argv[3], NULL, 10);

        if(current <= 15) current = 10;
        if(current >= 40) current = 50;
        if(current > 15 && current < 40) current = 20;
        if(stime < 1) stime = 1;
        if(stime > 100) stime = 100;
        if(rtime < 1) rtime = 1;
        if(rtime > 100) rtime = 100;

        dino_current = current;
        dino_samdelay = stime;
        dino_disdelay = rtime;

        uint16_t check = 2+(4*stime)+(4*rtime);
        if(check < 12) check = 12;
        if(check*100 > dino_interval)
        {
          dino_interval = check*100;
          if(dino_running)
          {
 //           gptStopTimer(&GPTD8);
   //         gptStartContinuous(&GPTD8, dino_interval);
          }
        }
        chprintf(chp, "Interval set to     %d ms\n\r", dino_interval/100);
        chprintf(chp, "Current set to      %d mA\n\r", current);
        chprintf(chp, "Sample delay set to %d ms\n\r", stime);
        chprintf(chp, "Relax time set to   %d ms\n\r", rtime);
      }
    }
    else

    {
      chprintf(chp, "USAGE: dino {start|stop|get}\n\r");
      chprintf(chp, "       dino interval {interval(ms)}\n\r");
      chprintf(chp, "       dino report {on|off}\n\r");
      chprintf(chp, "       dino set {current(mA) sampledelay(ms) relaxtime(ms)}\n\r");
    }
}



