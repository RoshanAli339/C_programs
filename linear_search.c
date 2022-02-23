#include <stdio.h>

int main()
{
	int a[10], n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the values of each element: ");
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);

	int x;
	printf("Enter the value you want to search for: ");
	scanf("%d", &x);

	int flag = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			flag = 1;
			break;
		}
	}

	if (flag)
		printf("%d is found in the given array!!\n", x);
	else
		printf("%d is not found in the given array!\n", x);
}
