#include "/Users/yarutiunov/Desktop/libmx/inc/libmx.h"
#include <stdio.h>
void *mx_realloc(void *ptr, size_t size)
{

    void *str1 = ptr;
    free(str1);

    str1 = malloc(size);
    return str1;
}

// int main()
// {
//     char *smth = "qwerty";
//     char *smth2 = "hui";
//     char *pp;
//     printf("%s\n", smth);
//     smth = (char *)malloc(10);
//     smth = smth2;
//     printf("%u\n", pp);
//     printf("%s\n", smth);
//     pp = (char *)mx_realloc(smth, 20);
//     printf("%u\n", pp);
//     printf("%s", smth);
//     return 0;
// }
