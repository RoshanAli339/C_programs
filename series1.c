#include <stdio.h>
#include <math.h>

float factorial(int n)
{
    return (n==1||n==0)?1:(n*factorial(n-1));
}

int main()
{
    int x;
    float sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    for (int i = 1,c = 0; i <= 10; ++i, c += 2)
    {
            sum += pow(x, c) / factorial(c);
    }

    printf("Sum of the series= %f\n", sum);
}
