#include <stdio.h>

void read(int[5][5][5], int, int, int);
void add(int[5][5][5], int[5][5], int, int, int);
void display(int[5][5][5], int[5][5], int, int, int);

int main()
{
	int m[5][5][5], n, r, c;

	printf("Enter the number of matrices you want to add: ");
	scanf("%d", &n);

	printf("Enter the number of rows: ");
	scanf("%d", &r);

	printf("Enter the number of columns: ");
	scanf("%d", &c);

	read(m, n, r,c);

	int f[5][5];

	add(m, f, n, r, c);

	display(m, f, n, r, c);

	return 0;
}

void read(int m[5][5][5], int n, int r, int c)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Enter the elements of Matrix %c: \n", (i+65));
		for (int j = 0; j < r; j++)
		{
			for (int k = 0; k <  c; ++k)
				scanf("%d", &m[i][j][k]);
		}
	}
}

void add(int m[5][5][5], int f[5][5], int n, int r, int c)
{
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			f[i][j] = 0;
			for (int k = 0; k < n; ++k)
				f[i][j] += m[k][i][j];
		}
	}
}

void display(int m[5][5][5], int f[5][5], int n, int r, int c)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Matrix %c: \n", (i+65));
		for (int j = 0; j < r; ++j)
		{
			for (int k = 0; k < c; ++k)
				printf("%d\t", m[i][j][k]);
			printf("\n");
		}
	}

	printf("\nSum of the above matrices: \n");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
			printf("%d\t", f[i][j]);
		printf("\n");
	}
}
