#include <stdio.h>

int main()
{
	int s = 0;
	printf("The perfect numbers before thousand are: ");

	for (int i = 2; i < 1000; ++i)
	{
		s = 0;
		for (int j = 1; j < i; ++j)
		{
			if(i % j == 0)
				s += j;
		}

		if (s == i)
			printf("%d ", i);
	}
}
