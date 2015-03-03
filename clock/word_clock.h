/**

*/
#ifndef WORD_CLOCK_H
#define WORD_CLOCK_H

#include <time.h>

struct clock
{
    unsigned char width, height;
    unsigned char *matrix;
};

struct clock word_clock_init(void);

int word_clock_update(struct clock *c, const struct tm *time);

void word_clock_pretty_print(const struct clock *c);

#endif /* WORD_CLOCK_H */
