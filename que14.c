/* WAP to input two numbers and print their quotient and remainder */

#include<stdio.h>

void main()
{
	int dividend,divisior,quotient,remainder;
	
	printf("\n enter devidend :");
	scanf("%d",&dividend);
	
	printf("\n enter divisior :");
	scanf("%d",&divisior);
	
	quotient = dividend / divisior;
	printf("\n quotient = %d",quotient);
	
	remainder = dividend % divisior;
	printf("\n remainder = %d",remainder);
}
