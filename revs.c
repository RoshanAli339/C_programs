#include<stdio.h>
#include<stdlib.h>
void main(){
  char s[100];
  printf("Enter a string: ");
  fgets(s,sizeof(s),stdin);
  int l=0;
  char rev[l+1];
  while(s[l]!='\0')
    ++l;
  for(int i=l;i>=0;--i)
    printf("%c",s[i]);
  printf("\n");
}
