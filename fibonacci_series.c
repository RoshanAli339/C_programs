#include <stdio.h>

int main()
{
	int a = 0, b = 1, c, n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
	if (n == 1)
	{
		printf("%d\n", a);
	}
	else if (n == 2)
	{
		printf("%d %d\n", a, b);
	}
	else if (n >= 3)
	{
		printf("\fThe fibonacci numbers are: %d %d ", a, b); 
		for (int i = 2; i < n; ++i) 
		{
			c = a + b;
			printf("%d ",c);
			a = b;
			b = c;
		}
	}
	
}


