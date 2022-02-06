#include <stdio.h>

int fact(int);
int is_strong(int);

int main()
{
	int n1, n2;
	printf("Enter range: ");
	scanf("%d %d", &n1, &n2);

	for (int i = n1; i <= n2; ++i)
	{
		if (is_strong(i))
			printf("%d ",i);
	}

	return 0;
}

int is_strong(int n)
{
	int sum = 0, temp = n;

	for ( ; temp > 0; temp /= 10)
		sum += fact(temp % 10);

	if (sum == n)
		return 1;
	else
		return 0;
}

int fact(int n)
{
	return (n == 1|| n== 0) ? 1 : n * fact(n - 1);
}
