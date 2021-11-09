#include "../inc/libmx.h" 
int mx_count_words(char *str, char c)
{
    if (str == NULL)
    {
        return 0;
    }
    int len = mx_strlen(str);
    int k = 0;
    int del_num = 0;
    int pre_check = 0;
    int post_check = len - 1;
    if (str[pre_check] == c)
    {
        while (str[pre_check] == c)
        {
            k--;
            pre_check++;
        }
    }
    if (str[post_check] == c)
    {
        while (str[post_check] == c)
        {
            k--;
            post_check--;
        }
    }
    for (int count = 0; count <= len; count++)
    {
        if (str[count] == c)
        {
            del_num++;
        }
    }
    return del_num + 1 + k;
}
