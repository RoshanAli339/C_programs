#include <stdio.h>

int perfect_num(int);
int main()
{
    int n;
    do 
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    while (n > 6 || n < 1);
    
    if(perfect_num(n))
        printf("%d is a perfect number!\n", n);
    else
        printf("%d is not a perfect number!\n", n);
}

int perfect_num(int n)
{
    int sum = 0;
    for (int i = 1; i <= n/2; ++i)
        if (n % i == 0)
            sum += i;
    if (sum == n)
        return 1;
    else
        return 0;
}
