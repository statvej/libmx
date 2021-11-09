#include <stdlib.h>
#include "/Users/yarutiunov/Desktop/libmx/inc/libmx.h"
void mx_str_reverse(char *s)
{
    int length, c;
    char *begin, *end;
    int temp;

    length = mx_strlen(s);
    begin = s;
    end = s;

    for (c = 0; c < length - 1; c++)
        end++;

    for (c = 0; c < length / 2; c++)
    {
        temp = *end;
        *end = *begin;
        *begin = temp;

        begin++;
        end--;
    }
}
