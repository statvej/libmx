#include "/Users/yarutiunov/Desktop/libmx/inc/libmx.h"
int mx_get_substr_index(const char *str, const char *sub)
{
    if (str == NULL || sub == NULL)
    {
        return -2;
    }
    int len_main = strlen(str);
    int len_sub = strlen(sub);
    int grand_count = 0;
    while (grand_count < len_main)
    {
        int sub_count = 0;
        while (str[grand_count + sub_count] == sub[sub_count])
        {
            sub_count++;
        }
        if (sub_count == len_sub)
        {
            return grand_count;
        }
        grand_count++;
    }
    return -1;
}
// int main()
// {
//     char *str = "kwfgwkfbh;vwkjfppwkjhwefhjg";
//     char *sub = "k";
//     return mx_get_substr_index(str, sub);
// }
