#include "../inc/libmx.h" 
int mx_get_char_index(const char *str, char c)
{
    if (str == NULL)
    {
        return -2;
    }
    int len_m = mx_strlen(str);
    int grand_count = 0;
    while (grand_count <= len_m)
    {
        if (str[grand_count] == c)
        {
            return grand_count;
        }
        grand_count++;
    }
    return -1;
}
