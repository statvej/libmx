#include "../inc/libmx.h" 
char *mx_strjoin(char const *s1, char const *s2)
{
    char *str_err;
    if (s1 == 0 && s2 == 0)
    {
        return 0;
    }
    else if (s2 == 0)
    {
        str_err = s1;
        return str_err;
    }
    else if (s1 == 0)
    {
        str_err = s2;
        return str_err;
    }

    else {
        return mx_strcat(mx_strdup(s1), mx_strdup(s2));
    }
}
