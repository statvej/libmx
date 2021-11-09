#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
    char *def = mx_strnew(mx_strlen(str));
    for (int count = 0; count <= mx_strlen(str); ++count)
    {
def[count] = str[count];
    }

    return def;
}
