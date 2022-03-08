#include <stdio.h>
#include <math.h>

float variance(int[], int);
float mean(int[], int);

int main()
{
    int a[10], n;

    //reading an array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    float v = variance(a, n);
    float sd = sqrt(v);
    printf("Variance= %.2f\n", v);
    printf("SD = %.2f\n", sd);
}

float mean(int a[10], int n)
{
    float m = 0;

    for (int i = 0; i < n; ++i)
        m += a[i];

    m /= n;
    return m;
}

float variance(int a[10], int n)
{
    float  v = 0, m = mean(a, n);

    for (int i = 0; i < n; ++i)
    {
        v += pow(a[i] - m, 2);
    }

    v /= n - 1;
    return v;
}
