#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    for(int dup=n;dup>0;dup/=10)
    {
        sum+= dup%10;
    }
    printf("Sum of digits: %d\n",sum);
}