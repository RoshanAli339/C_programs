#include<stdio.h>
int max_four(int a,int b,int c,int d){
  int max=0;
  if(a>max)
    max=a;
  if(b>max)
    max=b;
  if(c>max)
    max=c;
  if(d>max)
    max=d;
  return max;
}
void main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int maxim=max_four(a,b,c,d);
  printf("MAximum= %d",maxim);
}
