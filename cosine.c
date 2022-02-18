#include <stdio.h>
#include <math.h>

int fact(int n)
{
	return (n == 1|| n== 0) ? 1 : n * fact(n - 1);
}

int main()
{
	float val, sum = 0, x;
	printf("Enter value of x: ");
	scanf("%f", &x);

	x = x * ((22.0/7)/180);
	int c = 0, i = 1;

	while (1)
	{
		val = pow(x, c) / fact(c);

		if (val < 0.1E-5)
			break;
		
		if (i % 2 == 0)
			sum -= val;
		else
			sum += val;

		i++;
		c += 2;
	}

	printf("Cosine of %f= %f\n", x, sum);
}
