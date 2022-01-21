#include <stdio.h>

int factorial(int n);

int main()
{
	int ncr;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{	
			if(j <= i)
			{
				ncr = factorial(i) / (factorial(j) * factorial(i - j));
				printf("%d ",ncr);
			}
		}
		printf("\n");
	}

	for (int i = 3; i >= 0; --i)
	{
		for (int j = 3; j >= 0; --j)
		{
			if (j <= i)
			{
				ncr = factorial(i) / (factorial(j) * factorial(i - j));
				printf("%d ",ncr);
			}
		}
		printf("\n");
	}
}

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

