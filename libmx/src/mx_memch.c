#include "../inc/libmx.h" 
void *mx_memchr(const void *s, int c, size_t n)
{

    size_t i = 0;
    if(c >= 10){
    char *d = (char*)s;
    while (i < n)
    {

        if (d[i] == c)
        {

            return &d[i];
        }
        i++;
    }
    }
    if(c <= 10){
    int *d = (int*)s;
    while (i < n)
    {

        if (d[i] == c)
        {

            return &d[i];
        }
        i++;
    }
    }
    return NULL;
}

// int main(void)
// {

//     const int str[] = {123,0,10,908};
//     const int ch = 0;
//     int *ret;

//     ret = mx_memchr(str, ch, 25);
//     printf("String after  is - |%d|\n", ret[1]);
//     return 0;
// }