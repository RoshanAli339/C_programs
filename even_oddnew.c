#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	(n & 0x01) ? printf("%d is ODD number\n",n) : printf("%d is EVEN number\n",n);
}
