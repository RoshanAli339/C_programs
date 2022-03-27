#include <stdio.h>
int sumdigs(int n){
    int sum=0;
    for(;n>0;n/=10)
        sum+= n%10;
    return sum;
}
int main()
{
    long card;
    int add=0;
    printf("Enter the credit card number: ");
    scanf("%ld",&card);
    int c=0;
    for(long dup=card;dup>0;dup/=10){
        c+=1;
    }
    int arr[c];
    for(long dup=card;dup>0;dup/=10)
    {
        arr[c] = dup%10;
        printf("%ld ",dup%10);
    }
    if(c%2!=0)
    {
        for(int i=0;i<c;i+=2)
        {
            if(2*arr[i]>9)
            {
                add+= sumdigs(2*arr[i]);
            }
            else
            {
                add+= 2*arr[i];
            }
        }
        for(int i=1;i<c;i+=2)
        {
            add+= arr[i];
        }
    }
    else if(c%2==0)
    {
        for(int i=1;i<c;i+=2)
        {
            if(2*arr[i]>9)
            {
                add+= sumdigs(2*arr[i]);
            }
            else
            {
                add+= 2*arr[i];
            }
        }
        for(int i=0;i<c;i+=2)
        {
            add+= arr[i];
        }
    }
    printf("Sum of digits: %d\n",add);    
}
