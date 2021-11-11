#include <stdio.h>
#include "../inc/libmx.h"
char **mx_strsplit(char *str, char delim)
{
    char **ret;
    int retLen;
    char *c;

    if (str == NULL || delim == '\0')
    {
        return NULL;
    }
    else
    {
        retLen = 0;
        c = str;
        while (*c != '\0')
        {
            if (*c == delim)
            {
                retLen++;
                while (*c == delim)
                {
                    c++;
                }
            }

            c++;
        }

        ret = malloc((retLen + 1) * sizeof(*ret));
        ret[retLen] = NULL;

        c = str;
        retLen = 1;
        ret[0] = str;

        while (*c != '\0')
        {
            if (*c == delim)
            {
                while (*c == delim)
                {
                    c++;
                }
                c--;
                ret[retLen++] = &c[1];
                while (*c == delim)
                {
                    *c = '\0';
                    c++;
                }
            }

            c++;
        }
    }

    // for (int trim_count = 0; trim_count < retLen; trim_count++)
    // {
    //     ret[trim_count] = mx_del_char_fromstring( delim,ret[trim_count]);
    // }

    return ret;
}

int main()
{

    char str[] = "larghui qurwh ergiuh                               qwrgi ";
    char **pp = mx_strsplit(str, ' ');
    printf("%s\n", pp[0]);
    printf("%s\n", pp[1]);
    printf("%s\n", pp[2]);
    printf("%s\n", pp[3]);
    printf("%s\n", pp[4]);
}