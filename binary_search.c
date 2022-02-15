#include <stdio.h>
#include "myheader.h"

int binary_search(int[], int, int);

int main()
{
	int arr[10], n, x;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("Enter the elements of the array: ");
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	sort_a(arr, n);

	printf("Enter the element you want to search for: ");
	scanf("%d", &x);

	int flag = binary_search(arr, n, x);

	if (flag)
		printf("%d is found in the given array.\n", x);
	else
		printf("%d is not found in the given array.\n", x);

	return 0;
}

int binary_search(int a[10], int n, int x)
{
	int l = 0, h = n - 1, mid;

	while (l <= h)
	{
		mid = (l + h) / 2;
		if (a[mid] == x)
			return 1;
		else if (a[mid] < x)
			l  = mid + 1;
		else
			h = mid - 1;
	}

	return 0;
}
