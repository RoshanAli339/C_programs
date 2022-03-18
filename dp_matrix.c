#include <stdio.h>
#include <stdlib.h>

void read(int**, int, int);
void sum(int**, int**, int**, int, int);

int main()
{
    int **a, **b, **c, r1, c1, r2, c2;

    printf("Matrix A: \n");
    printf("Enter number of rows: ");
    scanf("%d", &r1);
    printf("Enter number of columns: ");
    scanf("%d", &c1);
    a = (int**)malloc(r1 * sizeof(int));
    for (int i = 0; i < r1; ++i)
        *(a+i) = (int*)malloc(c1 * sizeof(int));
    read(a, r1, c1);

    printf("Matrix B: \n");
    printf("Enter number of rows: ");
    scanf("%d", &r2);
    printf("Enter number of columns: ");
    scanf("%d", &c2);
    b = (int**)malloc(r2 * sizeof(int));
    for (int i = 0; i < r2; ++i)
        *(b+i) = (int*)malloc(c2 * sizeof(int));
    read(b, r2, c2);

    if (r1 != r2 || c1 != c2)
    {
        printf("Matrix Addition not possible!\n");
        return 1;
    }

    c = (int**)malloc(r1 * sizeof(int));
    for (int i = 0; i < r1; ++i)
        *(c+i) = (int*)malloc(c2 * sizeof(int));

    sum(a, b, c, r1, c1);
    printf("Matrix A + Matrix B = Matrix C:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
            printf("%d  ", *(*(c+i)+j));
        printf("\n");
    }

    return 0;
}

void read(int **a, int r, int c)
{
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", (*(a+i)+j));
}

void sum(int **a, int **b, int **c, int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            c[i][j] = a[i][j] + b[i][j];
    }
}
