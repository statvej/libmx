#include "../inc/libmx.h"
#include <stdio.h>

char **mx_strsplit(const char *s, char c)
{

    if (s == NULL)
    {
        return NULL;
    }
    int grand_count = 0;
    int arr_count = 0;
    int add_count = 0;
    int beg = 0;
    int len = mx_strlen(s);
    char *temp = (char *)malloc(len * sizeof(char));
    char **res = (char **)malloc(len * sizeof(char));
    while (s[add_count] == c)
    {
        add_count++;
    }
    grand_count += add_count;
    while (grand_count < len)
    {
        printf("%d\n", grand_count);
        temp[beg] = s[grand_count];
        ++beg;
        if (s[grand_count] == c)
        {
            printf("%s\n", temp);
            temp[beg - 1] = '\0';
            res[arr_count] = temp;
                printf("%s\n", res[arr_count]);
            temp = (char *)realloc((void *)temp, len * sizeof(char));
            while (s[grand_count] == c)
            {
                grand_count++;
            }
            grand_count--;
            beg = 0;
            arr_count++;
        }
        grand_count++;
    }
    printf("%s\n", res[0]);
    printf("%s\n", res[1]);
    printf("%s\n", res[2]);
    printf("%s\n", res[3]);
    res[arr_count + 1] = NULL;
    return res;
}

int main()
{
    printf(" liwhgfv\n");
    char str[] = "larghui qurwh ergiuh                               qwrgi ";
    char **pp = mx_strsplit(str, ' ');
    printf("%s\n", pp[0]);
    printf("%s\n", pp[1]);
    printf("%s\n", pp[2]);
    printf("%s\n", pp[3]);
}