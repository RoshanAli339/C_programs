#include <stdio.h>

void del(int[], int, int);

int main()
{
    int arr[10], n;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Enter the values: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    
    int x;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 10 == 0)
        {
            x = arr[i];
            del(arr, n, arr[i]);
            arr[n - 1] = x;
        }
    }

    printf("After: ");
    for (int i = 0; i < n; ++i)
        printf("%d  ", arr[i]);
    printf("\n");
    return 0;
}

void del(int arr[10], int n, int x)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            for (int j = i; j < n; ++j)
                arr[j] = arr[j + 1];
        }
    }
}
