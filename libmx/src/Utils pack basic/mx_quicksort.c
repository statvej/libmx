#include <stdio.h>
int mx_quicksort(int *arr, int left, int right)
{
    int temp;
    int count = 0;
    int megacount = 0;
    while (count != right)
    {

        if (arr[right] > arr[count])
        {

            count++;
        }

        else if (arr[right] < arr[count])
        {

            temp = arr[right];
            arr[right] = arr[count];
            arr[count] = temp;
            count++;
            megacount++;
        }
    }
    if (right >= right -1){
    mx_quicksort(arr, left, right - 1);
    }
    return count;
}

int main(void)
{

    int arr[] = {11, 13, 0, -1, -99};
    mx_quicksort(arr, 0, 5);
    printf("%d", arr[0]);
    return 0;
}
