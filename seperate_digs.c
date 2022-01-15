#include<stdio.h>
int main(){
    long card;
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
    
<<<<<<< HEAD
}
=======
}
>>>>>>> b3859ada6a0d3ce70e3f3799c6ba8924c581d840
