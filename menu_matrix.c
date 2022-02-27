#include <stdio.h>

void read(int[][5], int*, int*);
void add(int[][5], int[][5], int[][5], int, int);
void subtract(int[][5], int[][5], int[][5], int, int);
void multiply(int[][5], int[][5], int[][5], int, int, int, int);
void display(int[][5], int, int);
int equality(int[][5], int [][5], int, int, int, int);
void transpose(int[][5], int[][5], int, int);
int symmetry(int[][5], int, int);

int main()
{
    int a[5][5], b[5][5], c[5][5], r1, c1, r2, c2;
    printf("Matrix A: \n");
    read(a, &r1, &c1);

    printf("Matrix B: \n");
    read(b, &r2, &c2);

    int ch;

    while(1)
    {
        printf("\n1.Add matrices\n2.Subtract matrices\n3.Multiply matrices\n4. Check for symmetry\n5.Check for equality\n6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                if (r1 != r2 || c1 != c2)
                {
                    printf("Matrix Addition not possible!!\n");
                    return 1;
                }
                add(a, b, c, r1, c1);
                printf("A + B = \n");
                display(c, r1, c1);
                break;
            case 2:
                if (r1 != r2 || c1 != c2)
                {
                    printf("Matrix subtraction not possible!!\n");
                    return 1;
                }
                subtract(a, b, c, r1, c1);
                printf("A - B = \n");
                display(c, r1, c1);
                break;
            case 3:
                if (c1 != r2)
                {
                    printf("Matrix multiplication not possible!!\n");
                    return 1;
                }
                multiply(a, b, c, r1, c1, r2, c2);
                printf("A * B = \n");
                display(c, r1, c2);
                break;
            case 4:
                if (symmetry(a, r1, c1))
                    printf("Matrix A is Symmetric!!\n");
                else
                    printf("Matrix A is not Symmetric!!\n");
                if (symmetry(b, r2, c2))
                    printf("Matrix B is Symmetric!!\n");
                else
                    printf("Matrix B is not Symmetric!!\n");
                break;
            case 5:
                if (equality(a, b, r1, c1, r2, c2))
                    printf("Matrix A is equal to Matrix B!\n");
                else
                    printf("Matrix A is not equal to Matrix B!\n");
                break;
            case 6:
                return 0;
                break;
            default:
                printf("PLEASE ENTER A VALID VALUE!!\n");
        }
    }
}

void read(int a[5][5], int *r, int *c)
{
    printf("Enter number of rows: ");
    scanf("%d", r);
    printf("Enter number of columns: ");
    scanf("%d", c);
    
    printf("Rows = %d\n", *r);
    int m = *r;
    int n = *c;
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
}

void display (int a[5][5], int r, int c)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
}
void add(int a[5][5], int b[5][5], int sum[5][5], int r, int c)
{
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];
}

void subtract(int a[5][5], int b[5][5], int diff[5][5], int r, int c)
{
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            diff[i][j] = a[i][j] - b[i][j];
}
void multiply(int a[5][5], int b[5][5], int c[5][5], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
        {
            c[i][j] = 0;
            for (int k = 0; k < c1; ++k)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int symmetry(int a[5][5], int r, int c)
{
    int b[5][5];
    transpose(a, b, r, c);
    
    return equality(a,b, r, c, r, c);
}

int equality(int a[5][5], int b[5][5], int r1, int c1, int r2, int c2)
{
    if( r1 != r2 || c1 != c2)
        return 0;

    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            if (a[i][j] != b[i][j])
                return 0;
    return 1;
}

void transpose(int a[5][5], int b[5][5], int r, int c)
{
    for (int i = 0 ; i < r; ++i)
        for (int j = 0; j < c; ++j)
            b[j][i] = a[i][j];
}
