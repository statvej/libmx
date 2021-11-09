#include "../inc/libmx.h" 
char *mx_strndup(const char *str, int len)
{
    char *def = mx_strnew(mx_strlen(str));

    mx_strncpy(def, str, len);
    
    return def;
}
