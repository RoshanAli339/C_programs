#include <stdio.h>

int main()
{
	int a = 0, b = 1, c, n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
	printf("\fThe fibonacci numbers are: %d %d ", a, b); 
	for (int i = 2; i < n; ++i) 
	{
		c = a + b;
		printf("%d ",c);
		a = b;
		b = c;
	}
}


