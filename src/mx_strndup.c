#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n){
    char *new_string = 0;
    
    if((size_t)mx_strlen(s1) <= n){
        new_string = mx_strdup(s1);
    }
    else{
        new_string = mx_strnew(n);
        mx_strncpy(new_string, s1, n);
    }

    return new_string;
}
