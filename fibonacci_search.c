#include <stdio.h>

int main()
{
	int a = 0, b = 1, c, n, flag = 0;
	printf("Enter the number to search: ");
	scanf("%d", &n);
	if (n == 0 || n == 1)
	{
		printf("%d is in the Fibonacci series.\n",n);
		return 0;
	}

	c = a + b;
	while (c <= n)
	{
		if ( c == n)
		{
			flag = 1;
			break;
		}
		a = b;
		b = c;
		c = a + b;
	}

	if (flag == 1)
		printf("%d is in the Fibonacci series.\n",n);
	else
		printf("%d is not present in the Fibonacci series.\n",n);
	return 0;
}
