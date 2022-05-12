#include <stdio.h>

void del(int[], int, int);

int main()
{
    int arr[10], n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    del(arr, n, pos);
}

void del(int arr[10], int n, int pos)
{
    for (int i = pos - 1; i < n - 1; ++i)
    {
        arr[i] = arr[i+1];
    }

    n -= 1;

    printf("After deleting the array is: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}