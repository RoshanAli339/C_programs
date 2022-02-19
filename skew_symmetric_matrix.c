#include <stdio.h>

void transpose(int[][5], int[][5], int, int);

int main()
{
	int a[5][5], t[5][5], r, c;
	printf("Enter the number of rows: ");
	scanf("%d", &r);

	printf("Enter the number of columns: ");
	scanf("%d", &c);

	printf("Enter the elements of the matrix: \n");
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			scanf("%d", &a[i][j]);
	transpose(a, t, r, c);

	int flag = 1;

	for (int i = 0; i < r && flag; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if (t[i][j] != -a[i][j])
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag)
		printf("The given matrix is a Skew-Symmetric Matrix!\n");
	else
		printf("The given matrix is not a Skew-Symmetric Matrix!\n");

	return 0;
}

void transpose(int a[5][5], int t[5][5], int r, int c)
{
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			t[j][i] = a[i][j];
}
