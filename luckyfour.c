#include<stdio.h>
int main(){
	int t;
	printf("Enter the number of tests: ");
	scanf("%d",&t);
	int n[t],c[t];
	for(int i=0;i<t;++i){
		c[i]=0;
		scanf("%d",&n[i]);
		for(int dup=n[i];dup>0;dup/=10)
			if((dup%10) == 4)
				++c[i];
		printf("%d\n",c[i]);
	}
}
