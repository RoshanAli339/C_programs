#include<stdio.h>
#include<stdlib.h>
typedef struct student{
        char name[50];
        int marks;
}students;
void main(){
        int n;
        printf("Enter the number of students: ");
        scanf("%d",&n);
        students *ptr;
        ptr=(students*)malloc(n*sizeof(students));
        FILE *fptr;
        if((fptr=fopen("//home//xtremer//Desktop//programs//C_programs//sinfo.txt","a+"))==NULL){
                printf("Error in opening files!\n");
                exit(1);
        }
        for(int i=0;i<n;++i){
                printf("Enter the name of student %d: ",i+1);
                scanf("%[^\n]%*c",(ptr+i)->name);
                printf("Enter the marks of student %d: ",i+1);
                scanf("%d",(ptr+i)->marks);
        }       
        for(int i=0;i<n;++i){
                fprintf(fptr,"Name: %s",(ptr+i)->name);
                fprintf(fptr,"Marks: %d",(ptr+i)->marks);
        }
}
