/**
 * @{
 *
 * @file
 * @brief       Clock application
 *
 * @author      Christian Blank
 *
 * @}
 */

#include <stdio.h>
#include <time.h>
#include "word_clock.h"
#include "dcf77.h"

int main(void)
{
    struct tm time = dcf77_get_time();
    struct clock clock = word_clock_init();
    word_clock_update(&clock, &time);

    printf("%s", asctime(&time));
    word_clock_pretty_print(&clock);

    return 0;
}
