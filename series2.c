#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    return (n==0||n==1)?1:(n*factorial(n-1));
}

int main()
{
    int x;
    double sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    double val;

    int c = 1;
    while(1)
    {
        val = pow(x, c) / factorial(c);

        if (val < 0.1E-6)
            break;

        sum += val;
        c+=2;
    }

    printf("Sum of the series is:  %.7lf\n", sum);
}
