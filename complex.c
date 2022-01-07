#include<stdio.h>
typedef struct complex{
	float imag;
	float real;
}comp;
comp addnumbers(comp c1,comp c2){
	comp result;
	result.imag = c1.imag+c2.imag;
	result.real = c1.real+c2.real;
	return result;
}
int main(){
	comp c1,c2,result;
	printf("First number\n");
	printf("Enter real part: ");
	scanf("%f",&c1.real);
	printf("Enter imaginary part: ");
	scanf("%f",&c1.imag);
	printf("Second number\n");
	printf("Enter real part: ");
	scanf("%f",&c2.real);
	printf("Enter imaginary part: ");
	scanf("%f", &c2.imag);
	result = addnumbers(c1,c2);
	printf("Result real part: %f\n",result.real);
	printf("Result imaginary part: %f\n",result.imag);
}
