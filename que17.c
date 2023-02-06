/* WAP to input inches from the user and convert it into yards, feet 
   [yard=inch*0.027 yards,inch=0.083 feet] */
   
#include<stdio.h>

void main()
{
	float inch,yards,feet;
	
	printf("\n enter size in inches :");
	scanf("%f",&inch);
	
	yards=inch*0.027;
	printf("\n size in yards = %f",yards);
	
	feet=inch*0.083;
	printf("\n size in feet = %f",feet);
}
