#include<stdio.h>
#include<stdlib.h>
typedef struct threeNum{
	int n1,n2,n3;
}numbers;
void main(){
	int n;
	numbers num;
	FILE *fptr;
	if((fptr=fopen("//home//xtremer//Desktop//programs//C_programs//program2.bin","wb")) == NULL){
		printf("Error in opening the file");
		exit(1);
	}
	for(n=1;n<5;++n){
		num.n1=n;
		num.n2=5*n;
		num.n3=5*n +1;
		fwrite(&num , sizeof(numbers), 1, fptr);
	}
	fclose(fptr);
}
