#include <stdio.h>

void read(int[5][5], int[5][5], int, int, int, int);
void multiply(int[5][5], int[5][5], int[5][5], int, int, int, int);
void display(int[5][5], int[5][5], int[5][5], int, int, int, int);

int main()
{
	int a[5][5], b[5][5], mul[5][5], r1, c1, r2, c2;

	printf("Enter the number of rows of Matrix A: ");
	scanf("%d", &r1);

	printf("Enter the number of columns of Matrix A: ");
	scanf("%d", &c1);

	printf("Enter the number of rows of Matrix B: ");
	scanf("%d", &r2);

	printf("Enter the number of columns of Matrix B: ");
	scanf("%d", &c2);
	
	if (c1 !=  r2)
	{
		printf("Matrix multiplication is not possible!!\n");
		return 1;
	}

	read(a, b, r1, c1, r2, c2);

	multiply(a, b, mul, r1, c1, r2, c2);

	display(a, b, mul, r1, c1, r2, c2);

	return 0;
}

void read(int a[5][5], int b[5][5], int r1, int c1, int r2, int c2)
{
	printf("Enter the elements of Matrix A: ");
	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c1; ++j)
			scanf("%d", &a[i][j]);
	}

	printf("Enter the elements of Matrix B: ");
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; ++j)
			scanf("%d", &b[i][j]);
	}
}

void multiply(int a[5][5], int b[5][5], int mul[5][5], int r1, int c1, int r2, int c2)
{
	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c2; ++j)
		{
			mul[i][j] = 0;   
			for (int k = 0; k < c1; ++k)
				mul[i][j] += a[i][k]*b[k][j];
		}
	}
}

void display(int a[5][5], int b[5][5], int mul[5][5], int r1, int c1, int r2, int c2)
{
	printf("Matrix A: \n");
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; ++j)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	printf("Matrix B: \n");
	for (int i = 0; i < r2; ++i)
	{
		for (int j = 0; j < c2; ++j)
			printf("%d\t", b[i][j]);
		printf("\n");
	}

	printf("A * B: \n");
	for (int i = 0; i < r1; ++i)
	{
		for (int j= 0; j < c2; ++j)
			printf("%d\t", mul[i][j]);
		printf("\n");
	}
}
