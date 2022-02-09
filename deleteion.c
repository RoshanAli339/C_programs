#include <stdio.h>

void del_ele(int[], int, int);

int main()
{
	int arr[20], n, c = 0, dup, copies = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	dup = n;
	printf("Enter the elements: ");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if (arr[i] == arr[j])
			{
				c++;
			}

			if (c > 1)
			{
				del_ele(arr, n, j);
				j--;
				n--;
			}
		}
	}
	printf("N= %d\n", n);
	printf("AFter deletion elements are: ");
	for(int i = 0; i < dup - copies; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void del_ele(int arr[20], int n, int pos)
{
	int i;
	for (i = pos; i < n - 1; ++i)
		arr[i] = arr[i+1];
}
