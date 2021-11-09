#include <stdlib.h>

char *mx_strnew(const int size)
{

   char * ptr = (char *)malloc(1 * (size));
    if (ptr == NULL)
    {

        return NULL;
    }

    else
    {
        return ptr;
    }
}
