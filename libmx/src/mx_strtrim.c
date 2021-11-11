#include "../inc/libmx.h" 
char *mx_strtrim(const char *str)
{
    if (str == NULL)
    {
        return NULL;
    }
    int count = 0;
    int ind_last = mx_strlen(str) - 1;
    int ind_first = 0;
    if(mx_isspace(str[ind_first]) == false||mx_isspace(str[ind_last]) == false){
        return (char*)str;
    }
    while (mx_isspace(str[ind_first]) == true)
    {
        ind_first++;
    }
    while (mx_isspace(str[ind_last]) == true)
    {
        ind_last--;
    }
    char *ret = (char *)malloc(sizeof(char) * (ind_last - ind_first));
    if (ret == NULL)
    {
        return NULL;
    }
    while (ind_first <= ind_last)
    {
        ret[count] = str[ind_first];
        count++;
        ind_first++;
    }
    char * str2 = mx_unconstchar(str);
    void * to_free = str2;
    free(to_free);
    return ret;
}
