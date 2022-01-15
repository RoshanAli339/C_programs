#include<stdio.h>
typedef struct timeperiod{
	int hrs;
	int min;
	int sec;
}tp;
void difference(tp start,tp stop,tp *diff){
	while(stop.sec>start.sec){
		--start.min;
		start.sec+=60;
	}
	diff->sec = start.sec - stop.sec;
	while(stop.min>start.min){
		--start.hrs;
		start.min+=60;
	}
	diff->min = start.min - stop.min;
	diff->hrs = start.hrs - stop.hrs;
}
int main(){
	tp start,stop,diff;
	printf("Enter the start time in hrs mins and secs: ");
	scanf("%d %d %d",&start.hrs,&start.min,&start.sec);
	printf("Enter the stop time in hrs mins and secs: ");
	scanf("%d %d %d",&stop.hrs,&stop.min,&stop.sec);
	difference(start,stop,&diff);
	printf("The time period difference is: %dhrs %dmins %dsecs\n",diff.hrs,diff.min,diff.sec);
}	
