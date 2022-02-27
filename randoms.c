#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x = (rand() % 6) + 1;
    printf("Random= %d\n", x);
}
