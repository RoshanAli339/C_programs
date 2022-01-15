#include <stdio.h>
#include "myheader.h"
#include <math.h>

void main(void)
{
    int a = get_int("Enter a number: ");
    int b = get_int("Enter a number: ");
    int sum = a + b;
    int diff = abs(a - b);
    int mul = a * b;
    int q = a / b;
    int rem = a % b;

    printf("Sum=  %d\n",sum);
    printf("Difference= %d\n",diff);
    printf("Multiplication= %d\n",mul);
    printf("Quotient= %d\n",q);
    printf("Remainder= %d\n",rem);
}