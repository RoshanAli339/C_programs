#include <stdio.h>

int main()
{
	int a[5][5], r, c;
	printf("Enter the number of rows: ");
	scanf("%d", &r);

	printf("Enter the number of columns: ");
	scanf("%d", &c);

	printf("Enter the elements of the matrix: \n");
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			scanf("%d", &a[i][j]);
	int temp;
	for (int i = 0; i <= r; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}

	printf("The transpose of the given matrix is: \n");
	for (int i = 0; i < c; ++i)
	{
		for (int j = 0; j < r; ++j)
			printf("%d\t",  a[i][j]);
		printf("\n");
	}
}
