#include<stdio.h>
#include<stdlib.h>
void sum(int *a,int *b){
  int temp=*a;
  *a = *a+*b;
  if(temp>*b)
    *b = temp - *b;
  else
    *b = *b-temp;
}
void main(){
  int a,b;
  scanf("%d %d",&a,&b);
  sum(&a,&b);
  printf("%d\n%d\n",a,b);
}
