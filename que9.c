/* WAP to input principle,rate and time from user and calculate the simple interest and total amount. Display
   all the values */
   
#include<stdio.h>

void main()
{
	int time;
	float principle,rate,simple_int,total_amt;
	
	printf("\n Enter time :");
	scanf("%d",&time);
	
	printf("\n Enter principle amount :");
	scanf("%f",&principle);
	
	printf("\n Enter Rate :");
	scanf("%f",&rate);
	
	simple_int=(principle*rate*time)/100.0;
	
	printf("\n principle amount=%.2f",principle);
	printf("\n rate=%.2f",rate);
	printf("\n time=%d",time);
	printf("\n simple interest=%.2f",simple_int);
}

