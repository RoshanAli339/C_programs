#include <stdio.h>
#include <math.h>

int main()
{
	int n, len;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	len = (int)(log10(n) + 1);

	printf("The number of digits of %d is %d.\n", n, len);
}
