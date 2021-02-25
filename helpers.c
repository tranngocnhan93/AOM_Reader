#include "hal.h"
#include "helpers.h"

BaseSequentialStream* consoleStream;

void dump(const char* data, int len)
{
    int n = 0;
    do
    {
        int i = MIN(len-n, 16);
        int j = 0;

        PRINT("%04x ", n);

        for(j=n;j<(n+i);j++)
            PRINT(" %02X", data[j]);

        for(j=0;j<(16-i)+1;j++)
            PRINT("   ");

        for(j=n;j<(n+i);j++)
            PRINT("%c", ISPRINT(data[j]));

        PRINT("\n\r");
        n += i;
    }
    while (n < len);
}

/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Check if a voltage(mV)/current(mA) is higher than a preset value
//!
//!
//! @param int num1: user input voltage(mV)/current(mA)
//! @param int num2: constant value
//! @param int tolerance: added tolerance to num1 to take noise into account
//!
//! @return int 0 (num1 + tolerance) is lower than num2
//!             1 (num1 + tolerance) is higher than num2
//!            -1 error (num1 + tolerance -> overflow)
//
/**************************************************************************************************/
int checkhigher(int num1, const int num2, const unsigned int tolerance)
{
    int lastnum1 = num1;
    num1 += tolerance;
    if(num1 < lastnum1)    //overflowed
    {
        return -1;
    }

    if(num1 > num2)
    {
        return 1;
    }
    else return 0;
}

/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Check if a voltage(mV)/current(mA) is lower than a preset value
//!
//!
//! @param int num1: user input voltage(mV)/current(mA)
//! @param int num2: constant value
//! @param int tolerance: added tolerance (mV/mA) to num1 to take noise into account
//!
//! @return int 0 (num1 - tolerance) is higher than num2
//!             1 (num1 - tolerance) is lower than num2
//!            -1 error (num1 - tolerance -> overflow)
//
/**************************************************************************************************/
int checklower(int num1, const int num2, const unsigned int tolerance)
{
    int lastnum1 = num1;
    num1 -= tolerance;
    if(num1 > lastnum1)    //overflowed
    {
        return -1;
    }

    if(num1 < num2)
    {
        return 1;
    }
    else return 0;
}

/**************************************************************************************************/
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//! \brief Check if a voltage(mV)/current(mA) is equal to a preset value
//!
//!
//! @param int num1: user input voltage(mV)/current(mA)
//! @param int num2: constant value
//! @param int threshold: threshold (mV/mA) around num2 to take noise into account
//!
//! @return int 0 num1 is not within (num2 +/- tolerance)
//!             1 num1 is within (num2 +/- tolerance)
//!            -1 error (num2 +/- tolerance -> overflow)
//
/**************************************************************************************************/
int checkequal(int num1, const int num2, const int threshold)
{
    int lowerlimit, upperlimit, lastlowlim, lastuplim;
    lowerlimit = num2 - threshold;
    upperlimit = num2 + threshold;
    lastlowlim = lowerlimit;
    lastuplim = upperlimit;

    if(lowerlimit > lastlowlim || upperlimit < lastuplim)    //overflowed
    {
        return -1;
    }

    if(num1 > lowerlimit && num1 < upperlimit)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



