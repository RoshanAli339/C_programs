#include <stdio.h>
#include "myheader.h"

int main(void)
{
    int n = get_int("Enter the number of elements: ");
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        arr[i] = get_int("Enter element: ");
    }

    sort_a(arr, n);
    printf("The sorted array in ascending order: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("Element %d: %d\n",i + 1,arr[i]);
    }

    sort_b(arr, n);
    printf("The sorted array in descending order: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("Element %d: %d\n",i + 1,arr[i]);
    }
}