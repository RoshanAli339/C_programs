#include <stdio.h>


int main()
{
    int arr[10], b[10], n, j = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Enter the values: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 10 != 0) 
        {
            b[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 10 == 0)
        {
            b[j] = arr[i];
            j++;
        }
    }

    printf("After: ");
    for (int i = 0; i < n; ++i)
        printf("%d  ", b[i]);
    printf("\n");
    return 0;
}
