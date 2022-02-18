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
		for(int j = i+1; j < n; ++j)
		{
			if (arr[i] == arr[j])
			{
				for (int k = j; k < n; ++k)
					arr[k] = arr[k+1];
				j--;
				n--;
			}
		}
	}
	printf("N= %d\n", n);
	printf("AFter deletion elements are: ");
	for(int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
