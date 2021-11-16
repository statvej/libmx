#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
    int index = 0;

    for(; src[index] && index < len; index++){
        dst[index] = src[index];
    }

    dst[index] = '\0';

    return dst;
}

