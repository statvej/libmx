#include "/Users/yarutiunov/Desktop/libmx/inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n)
{

const char *p = s1;
const char *q = s2;

    while (n > 0)
    {
        if (*p != *q)
            return (*p - *q);
        n--;
        p++;
        q++;
    }
    return 0;
}
