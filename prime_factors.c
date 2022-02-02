#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int count, f;

	for (int i = 2; i <= n/ 2; ++i)
	{
		count = 0;
		for (int j = 2; j <= i/2; ++j)
		{
			if (i % j == 0)
				count++;
		}
		if (count ==0 && n % i ==0)
			printf("%d ", i);
	}
}
