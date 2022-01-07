#include<stdio.h>
#include<stdlib.h>
typedef struct threeNum{
	int n1,n2,n3;
}numbers;
void main(){
	numbers num;
	FILE *fptr;
	if((fptr = fopen("//home//xtremer//Desktop//programs//C_programs//program2.bin","rb"))==NULL){
		printf("Error in opening file!");
		exit(1);
	}
	for(int i=1;i<5;++i){
		fread(&num, sizeof(numbers),1,fptr);
		printf("n1: %d\tn2: %d\tn3: %d\n",num.n1,num.n2,num.n3);
	}
}
