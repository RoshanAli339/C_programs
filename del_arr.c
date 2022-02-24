#include <stdio.h>

void del(int[], int, int);

int main()
{
	int a[10], n, x;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the values: ");
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);

	printf("Enter the element you want to delete: ");
	scanf("%d", &x);

	del(a, n, x);

	n-=1;

	printf("After deleting the array is: ");
	for (int i = 0; i < n; ++i)
		printf("%d  ", a[i]);

	return 0;
}

void del(int a[10], int n, int x)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			for (int j = i; j < n; ++j)
				a[j] = a[j+1];
		}
	}
}
