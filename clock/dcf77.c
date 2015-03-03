#include "dcf77.h"

struct tm dcf77_get_time(void)
{
    struct tm now;
    now.tm_sec = 33;
    now.tm_min = 11;
    now.tm_hour = 22;
    now.tm_mday = 6;
    now.tm_mon = 0;
    now.tm_year = 115;
    now.tm_wday = 2;

    return now;
}
