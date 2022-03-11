#include <stdio.h>

int main()
{
    int a[5][5], r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter the elements: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);

    int sum = 0;

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum += a[i][j];

    printf("Sum of all elements: %d\n", sum);
}
