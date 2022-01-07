#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char c[1000];
    char num[10]={'0','1','2','3','4','5','6','7','8','9'};
    int f[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%[^\n]%*c",c);
    for(int i=0;i<strlen(c);++i){
        for(int j=0;j<10;++j){
            if(c[i] == num[j]){
                f[j]+=1;
            }
        }
    }
    for(int i=0;i<10;++i){
        printf("%d ",f[i]);
    }
    return 0;
}

