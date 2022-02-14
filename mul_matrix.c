#include <stdio.h>

int main()
{
	int a[5][5], b[5][5];

	int r1, c1, r2, c2;

	printf("Enter number of rows of Matrix A: ");
	scanf("%d", &r1);
	printf("Enter number of columns of Matrix A: ");
	scanf("%d", &c1);

	printf("Enter number of rows of Matrix B: ");
	scanf("%d", &r2);
	printf("Enter number of columns of Matrix B: ");
	scanf("%d", &c2);

	if (c1 != r2)
	{
		printf("Matrix Multiplication is not possible!\n");
		return 1;
	}

	printf("Enter the elements of Matrix A: ");
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; ++j)
			scanf("%d", &a[i][j]);

	printf("Enter the elements of Matrix B: ");
	for (int i = 0; i < r2; i++)
		for (int j = 0; j < c2; ++j)
			scanf("%d", &b[i][j]);

	int m[5][5];

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; ++j)
		{
			m[i][j] = 0;
			for (int k = 0; k < c1; ++k)
				m[i][j] += a[i][k] * b[k][j];
		}
	}


	printf("\nMatrix A: \n");
	for (int i = 0 ; i < r1 ; ++i)
	{
		for (int j = 0; j < c1; ++j)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	printf("\nMatrix B: \n");
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; ++j)
			printf("%d\t", b[i][j]);
		printf("\n");
	}

	printf("\nA * B: \n");
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; ++j)
			printf("%d\t", m[i][j]);
		printf("\n");
	}

	return 0;
}
