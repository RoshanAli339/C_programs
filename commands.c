#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("required number of arguments are not given");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("Sum of given numbers: %d\n", a+b);
}