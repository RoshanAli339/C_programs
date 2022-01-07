#include<stdio.h>
int sumdig(int n){
	int sum=0,c=0,first,dup;
	for(dup=n;dup>9;dup/=10);
	first = dup;
	sum= n%10+first;
	return sum;
}
void main(){
	int t;
	printf("Enter the number of tests: ");
	scanf("%d",&t);
	int n[t],sum[t],c=-1;
	for(int i=0;i<t;++i){
		printf("Enter number: ");
		scanf("%d",&n[i]);
		sum[i]= sumdig(n[i]);
		printf("%d\n",sum[i]);
	}
}
