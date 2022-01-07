#include<stdio.h>
#include<stdlib.h>
void main(){
	int num;
	FILE *fptr;
	if((fptr=fopen("//home//xtremer//Desktop//programs//C_programs//program.txt","r"))==NULL){
		printf("Error! opening file!\n");
		exit(1);
	}
	fscanf(fptr,"%d",&num);
	printf("Value of n= %d\n",num);
	fclose(fptr);
}
