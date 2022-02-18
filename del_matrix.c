#include <stdio.h>

int sub_matrix_mod(int[2][2]);

int main()
{
	int mat[5][5], r, c;
	printf("Enter the number of rows: ");
	scanf("%d", &r);

	printf("Enter the number of columns: ");
	scanf("%d", &c);

	printf("Enter the elements of the matrix: \n");
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			scanf("%d", &mat[i][j]);

	int mod = 0, val[2][2], l = 0, m = 0;

	for (int i = 0; i < c; ++i)
	{
		l = m = 0;
		for (int j = 1; j < r; ++j)
		{
			for (int k = 0; k < c; ++k)
			{
				if (k != i && l < 2)
				{
					if (m == 2)
					{
						l++;
						m = 0;
						val[l][m] = mat[j][k];
						m++;
					}
					else
					{
						val[l][m] = mat[j][k];
						m++;
					}
				}
			}
		}

		if (i % 2 == 0)
			mod += mat[0][i] * sub_matrix_mod(val);
		else
			mod -= mat[0][i] * sub_matrix_mod(val);
	}

	printf("The modulus of the given matrix is: %d\n", mod);
	return 0;
}

int sub_matrix_mod(int a[2][2])
{
	int mod = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
	return mod;
}
