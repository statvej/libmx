#include "../inc/libmx.h" 
int mx_binary_search(char **arr, int size, const char *s, int count)
{
    int start = 0;
    int mid;

    while (start <= size)
    {
        ++count;
        mid = start + (size - start) / 2;

        if (mx_strcmp(arr[mid], s) == 0)
            return mid;

        if (mx_strcmp(arr[mid], s) < 0)
            start = mid + 1;

        else
            size = mid - 1;
    }

    return mid;
}
