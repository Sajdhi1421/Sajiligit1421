/* WAP to find out the area of a triangle */

#include<stdio.h>

void main()
{
	float area,base,height;
	
	printf("\n enter base :");
	scanf("%f",&base);
	
	printf("\n enter height :");
	scanf("%f",&height);
	
	area=base*height/2;
	printf("\n area of triangle=%f",area);
}
