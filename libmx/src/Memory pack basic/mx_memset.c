#include "/Users/yarutiunov/Desktop/libmx/inc/libmx.h"
void *mx_memset(void *b, int c, size_t len)
{
    size_t i = 0;
    unsigned char *d = b;
    while (i <= len)
    {

        d[i] = c;
        i++;
    }
    
   

    return d;
}
