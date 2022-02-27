#include <stdio.h>

void reverse(int[], int);
int search(int[], int, int);
void insertion(int[], int, int, int);
void delete(int[], int, int);
int del_dup(int[], int);

int main()
{
	int a[10], n, choice, x, pos, duplicates;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("Enter elements %d: ", (i+1));
		scanf("%d", &a[i]);
	}

	do
	{
		printf("\n1.Insert new element\n2.Delete an element\n3.Print elements\n4.Remove duplicates\n5.Reverse the array\n6.Quit\n");
		printf("Enter your choice as per the serial number: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter the element you want to insert: ");
				scanf("%d", &x);
				printf("Enter the position where you want to insert the element: ");
				scanf("%d", &pos);
				
				if (pos > 10)
				{
					printf("The maximum number of elements is 10. Please try a valid value!\n");
				}
				else
				{
					insertion(a, n, x, pos);
					n++;
					printf("After inserting the element the final array is: ");
					for (int i = 0; i < n; ++i)
						printf("%d  ", a[i]);
					printf("\n");
				}
				break;
			case 2:
				printf("Enter the element you want to delete: ");
				scanf("%d", &x);
				
				if (search(a, n, x))
				{
					delete(a, n, x);
					n--;
					printf("After deleting the given element the final array is: ");
					for (int i = 0; i < n; ++i)
						printf("%d  ", a[i]);
					printf("\n");
				}
				else
					printf("%d is not found in the given array!\n", x);
				break;
			case 3:
				printf("The elements of the array are: ");
				for (int i = 0; i < n; ++i)
					printf("%d  ", a[i]);
				printf("\n");
				break;
			case 4:
				duplicates = del_dup(a, n);
				n -= duplicates;
				printf("After deleting the duplicate elements the final array is: ");
				for (int i = 0; i < n; ++i)
					printf("%d  ", a[i]);
				printf("\n");
				break;
            case 5:
                reverse(a, n);
                printf("After reverseing the array is: ");
                for (int i = 0; i < n; ++i)
                    printf("%d  ", a[i]);
                printf("\n");
                break;
			case 6:
				return 0;
            default:
                printf("PLEASE ENTER A VLAID INPUT!!\n");
		}

	}
	while (choice != 6);
	return 0;
}

int search(int a[10], int n, int x)
{
    
    for (int i = 0; i < n; ++i)
        if (a[i] == x)
            return 1;

	return 0;
}
void insertion(int a[10], int n, int x, int pos)
{
	for (int i = n; i > pos - 1; --i)
		a[i] = a[i - 1];
	a[pos - 1] = x;
}

void delete(int a[10], int n, int x)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			for (int j = i; j < n; ++j)
				a[j] = a[j + 1];
			n--;
		}
	}
}

int del_dup(int a[10], int n)
{
	int dup = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] == a[j])
			{
				for (int k = j; k < n; ++k)
					a[k] = a[k+1];
				j--;
				n--;
				dup++;
			}
		}
	}

	return dup;
}

void reverse(int a[10], int n)
{
    int temp;
    for (int i = 0; i <= n/2; ++i)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
