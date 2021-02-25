#include "hal.h"
#include "shell.h"
#include "shellcommands.h"

char uartShellHistoryBuffer[SHELL_MAX_HIST_BUFF];

const ShellCommand commands[] =
{
    { "reboot",  cmd_reboot },
    { "getmode", cmd_getmode },
    {NULL, NULL}
};

const ShellConfig shell_cfg_uart =
{
    (BaseSequentialStream *)&SD3,
    commands,
    uartShellHistoryBuffer,
    SHELL_MAX_HIST_BUFF
};
