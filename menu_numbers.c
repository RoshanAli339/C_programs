#include <stdio.h>
#include <math.h>

int factorial(int n);
int even_odd(int n);
int prime(int n);
int perfect(int n);
int armstrong(int n);
int palindrome(int n);
int strong(int n);
int fibonacci(int n);

int main()
{
    int n, ch;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (1)
    {
        printf("1. Even or odd\n2. Prime number\n3. Perfect number\n4. Armstrong number\n5. Palindrome number\n6. Strong number\n7. Fibonacci\n8.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                if (even_odd(n))
                    printf("%d is an Odd number!\n", n);
                else
                    printf("%d is an Even number!\n", n);
                break;
            case 2:
                if (prime(n))
                    printf("%d is a Prime number!\n", n);
                else
                    printf("%d is a Composite number!\n", n);
                break;
            case 3:
                if (perfect(n) == n)
                    printf("%d is a Perfect number!\n", n);
                else if (perfect(n) > n)
                    printf("%d is an Abundant number!\n", n);
                else
                    printf("%d is a Deficient number!\n",n);
                break;
            case 4:
                if (armstrong(n))
                    printf("%d is an Armstrong number!\n", n);
                else
                    printf("%d is not an Armstrong number!\n", n);
                break;
            case 5:
                if (palindrome(n))
                    printf("%d is a Palindrome number!\n", n);
                else
                    printf("%d is not a Palindrome number!\n", n);
                break;
            case 6:
                if (strong(n))
                    printf("%d is a Strong number!\n", n);
                else
                    printf("%d is not a Strong number!\n", n);
                break;
            case 7:
                if (fibonacci(n))
                    printf("%d is in the Fibonacci series!\n", n);
                else
                    printf("%d is not in the Fibonacci series!\n", n);
                break;
            case 8:
                return 0;
                break;
            default:
                printf("PLEASE ENTER A VALID INPUT!!\n");
        }
    }
}

int even_odd(int n)
{
    return n & 0x01;
}

int prime(int n)
{
    int c = 0;

    for (int i = 2; i < n; ++i)
        if (n % i == 0)
            c++;
    if (!c)
        return 1;
    else
        return 0;
}

int armstrong(int n)
{
    int count = 0, sum = 0;

    for (int dup = n; dup > 0; dup /= 10)
        count++;

    for (int dup = n; dup > 0; dup /= 10)
        sum += (int)pow(dup % 10, count);

    if (sum == n)
        return 1;
    else
        return 0;
}

int fibonacci(int n)
{
    int a = 0, b = 1, c;
    if (n == 1 || n == 0)
        return 1;

    c = a + b;

    while (c <= n)
    {
        if (c == n)
            return 1;
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}

int perfect(int n)
{
    int sum = 0;

    for (int i = 1; i <= n/2; ++i)
        if (n % i == 0)
            sum += i;

    return sum;
}

int strong(int n)
{
    int sum = 0;

    for (int dup = n ; dup > 0;  dup /= 10)
        sum += factorial(dup % 10);
    
    return sum == n;
}

int factorial(int n)
{
    return (n==1||n==0) ? 1 : n  * factorial(n - 1);
}

int palindrome(int n)
{
    int rev = 0;
    for (int dup = n; dup > 0; dup /= 10)
    {
        rev = (rev * 10) + dup % 10;
    }

    return rev == n;
}
