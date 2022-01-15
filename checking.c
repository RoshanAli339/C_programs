#include <stdio.h>
#include "myheader.h"

int main()
{
    int n = get_int("Enter an integer: ");
    float f = get_float("Enter a floating point number: ");
    double d = get_double("Enter a double floating point number: ");
    char ch = get_char("Enter a character: ");

    printf("Integer= %d\n",n);
    printf("Floating point= %f\n",f);
    printf("Double floating point= %lf\n",d);
    printf("Character: %c\n",ch);

    int fa = get_int("Enter a number to find the factorial of: ");
    int fact = factorial(fa);
    int b = get_int("Enter the base number: ");
    int p = get_int("Enter the power number: ");
    int ans = pow_int(b, p);

    printf("The factorial of %d is %d\n",fa, fact);
    printf("The value of %d to the power of %d is %d\n", b, p, ans);
}
