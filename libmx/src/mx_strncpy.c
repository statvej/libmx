#include "../inc/libmx.h" 
char *mx_strncpy(char *dst, const char *src, size_t len)
{

    //'mx_memset(dst, '\0', len);
    size_t i;
    char *temp;
    temp = dst;
    for (i = 0; i < len; i++)
    {
        dst[i] = src[i];
    }
    return temp;
}

// int main (void){

// char *str = "wkjghf";
// char pp[16];
// // pp = mx_strncpy(pp, str, 3);
// printf("%s", mx_strncpy(pp, str, 3));

// }
