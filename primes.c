#include <stdio.h>

int primes();

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        printf("%d  ", primes());
    }
}

int primes()
{
    return 5;
}
