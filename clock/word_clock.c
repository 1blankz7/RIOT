#include <stdio.h>
#include "word_clock.h"
#include "word_clock_german.h"
#include <stdlib.h>
#include <string.h>


struct clock word_clock_init(void)
{
    struct clock clock;
    clock.width = WORD_CLOCK_WIDTH;
    clock.height = WORD_CLOCK_HEIGHT;
    int length = clock.width * clock.height;

    clock.matrix = malloc(sizeof(unsigned char) * length);
    memset(clock.matrix, 0, sizeof(unsigned char) * length);

    return clock;
}

int word_clock_update(struct clock *c, const struct tm *time)
{

    for (int i = 0; i < 5; ++i)
    {
        c->matrix[ES_IST[i]] = 1;
    }

    return 0;
}

void word_clock_pretty_print(const struct clock *c) {
    for (int x = 0; x < c->width+2; ++x)
    {
        printf("-");
    }
    printf("\n");
    for (int y = 0; y < c->height; ++y)
    {
        printf("|");
        for (int x = 0; x < c->width; ++x)
        {
            char tmp = c->matrix[y * c->width + x] == 0 ? ' ' : 'X';
            printf("%c", tmp);
        }
        printf("|\n");
    }
    for (int x = 0; x < c->width+2; ++x)
    {
        printf("-");
    }
    printf("\n");
}
