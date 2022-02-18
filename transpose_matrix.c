#include <stdio.h>

int main()
{
	int m[5][5], r, c;
	printf("Enter the number of rows: ");
	scanf("%d", &r);

	printf("Enter the number of columns: ");
	scanf("%d", &c);

	printf("Enter the elements of the matrix: \n");
	
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
		{
			printf("Enter the element %d%d: ", (i+1),(j+1));;
			scanf("%d", &m[i][j]);
		}

	int t[5][5];

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
			t[j][i] = m[i][j];
	}

	printf("The given matrix is: \n");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
			printf("%d\t", m[i][j]);
		printf("\n");
	}

	printf("\nThe transpose of the above matrix is: \n");
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; ++j)
			printf("%d\t", t[i][j]);
		printf("\n");
	}
	return 0;
}
