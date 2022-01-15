#include<stdio.h>
typedef struct student{
	char name[50];
	int roll;
}student;
int main(){
	student s1;
	printf("Enter the name of student: ");
	scanf("%[^\n]%*c",s1.name);
	printf("Enter the roll number of the student: ");
	scanf("%d",&s1.roll);
	printf("\fDislaying information\n");
	printf("Name: %s\n",s1.name);
	printf("Roll number: %d\n",s1.roll);
}
