#include "../inc/libmx.h" 
int mx_count_substr(const char *str, const char *sub)
{
    if (str == NULL || sub == NULL)
    {
        return -1;
    }
    int len_m = mx_strlen(str);
    int len_sub = mx_strlen(sub);
    if (len_sub == 0 || len_m == 0)
    {
        return 0;
    }
    int ret = 0;
    int grand_count = 0;
    while (grand_count <= len_m)
    {
        int sub_count = 0;
        while (str[grand_count + sub_count] == sub[sub_count])
        {
            if (sub_count == len_sub - 1)
            {
                ret++;
            }
            sub_count++;
        }
        grand_count++;
    }
    return ret;
}
