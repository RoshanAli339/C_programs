#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//to find the factorial of a number by using simple recusrion
int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

//to take integer input
int get_int(char text[])
{
    int n;
	printf("%s",text);
	scanf("%d",&n);
    return n;
}

//to take float type as input
float get_float(char text[])
{
    float n;
    printf("%s",text);
    scanf("%f",&n);
    return n;
}

//to take a character as input
char get_char(char text[])
{
    char ch;
    printf("%s",text);
    scanf(" %c",&ch);
    return ch;
}

//input a double vairable
double get_double(char text[])
{
    double n; 
    printf("%s",text);
    scanf("%lf",&n);
    return n;
}

//function to return the power of x to y in integer type
int pow_int(int base, int exponent)
{
    int result = 1;
    while (exponent != 0)
    {
        result *= base;
        exponent--;
    }
    return result;
}

void sort_a(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < (n - 1 - i); ++j)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    return;
}

//sorting an integer array in descending order
void sort_d(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < (n - 1 - i); ++j)
        {
            if (arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    return;
}
