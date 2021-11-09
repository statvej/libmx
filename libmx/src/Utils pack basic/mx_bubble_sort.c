#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_bubble_sort(char **arr, int size)
{
    char *temp;
    int counterf = 0;
    int gran_loop_counter = 0;
    while (gran_loop_counter <= size)
    {
        int counter_global = 0;
        while (counter_global != size - 1)
        {
            if (mx_strcmp(arr[counter_global], arr[counter_global + 1]) > 0)
            {
                temp = arr[counter_global];
                arr[counter_global] = arr[counter_global + 1];
                arr[counter_global + 1] = temp;
                ++counterf;
            }
            ++counter_global;
        }

        ++gran_loop_counter;
    }
    return counterf;
}
