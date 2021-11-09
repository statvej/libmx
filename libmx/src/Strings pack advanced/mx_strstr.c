#include "/Users/yarutiunov/Desktop/libmx/inc/libmx.h"
char *mx_strstr(const char *haystack, const char *needle)
{
    int len1 = mx_strlen(haystack);
    int len2 = mx_strlen(needle);
    int count1 = 0;
    while (count1 <= len1)
    {
        int match_counter = 1;
        int count2 = 0;
        if (haystack[count1] == needle[0])
        {
            while (count2 <= len2)
            {
                if (haystack[count1 + count2] == needle[count2])
                {
                    match_counter++;
                }
                if (match_counter >= len2)
                {
                    char *ret = mx_unconstchar(&haystack[count1]);
                    return ret;
                }
                count2++;
            }
        }
        count1++;
    }
    return 0;
}
