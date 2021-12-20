#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
   char ch,str[50],sen[150];
    scanf("%c",&ch);
    scanf("%s",str);
    scanf("\n");
    fgets(sen, sizeof(sen),stdin);
    printf("%c\n",ch);
    printf("%s\n",str);
    puts(sen);
}
