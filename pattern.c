#include <stdio.h>
void main(){
    int n;
    printf("Height: ");
    scanf("%d",&n);
    while(n<1||n>9){
        printf("Height: ");
        scanf("%d",&n);
    }
    for(int i=n;i>=1;--i){
        for(int j=1;j<=n;++j){
            if(j>=i){
                printf("# ");
            }
        }
        printf("\n");
    }
}