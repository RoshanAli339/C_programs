#include <stdio.h>

int main()
{
	int b = 5, j;
	j = (++b) * (++b) * (b++);
	printf("%d %d\n", j, b);
}
