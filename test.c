#include <stdio.h>

int main()
{
	int b = 5, j;
	j = (++b) * (++b) * (b++);
  printf("H");
	printf("%d %d\n", j, b);
}
