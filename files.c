#include<stdio.h>
#include<stdlib.h>
void main(){
	int num;
	FILE *fptr;
	fptr = fopen("//home//xtremer//Desktop/programs//C_programs//program.txt","a");
	if(fptr == NULL){
		printf("Error!!");
		exit(1);
	}
	printf("Enter number: ");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);
}
