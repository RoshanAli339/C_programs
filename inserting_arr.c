#include <stdio.h>

void insert(int[], int, int, int);

int main()
{
	int arr[20], n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}

	int x, pos;
	printf("Enter the element you want to insert: ");
	scanf("%d", &x);

	printf("Enter the position where you want to insert the given element: ");
	scanf("%d", &pos);

	insert(arr, n, x, pos);
	n++;
	printf("After inserting: ");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
        printf("\n");
	return 0;
}

void insert(int a[20], int n, int x, int pos)
{
	int i;
	for (i = n ; i > pos - 1; --i)
	{
		a[i] = a[i - 1];
	}

	a[pos - 1] = x;
}
