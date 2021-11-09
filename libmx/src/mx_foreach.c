#include "../inc/libmx.h" 
void mx_foreach(int *arr, int size, void (f)(int))
{
    int count = 0;
    while (arr[count] <= size)
    {
        f(arr[count]);
        ++count;
    }
}
