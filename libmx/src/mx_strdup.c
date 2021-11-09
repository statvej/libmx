#include "../inc/libmx.h" 
char *mx_strdup(const char *str)
{
    char *def = mx_strnew(mx_strlen(str));
    for (int count = 0; count <= mx_strlen(str); ++count)
    {
def[count] = str[count];
    }

    return def;
}
