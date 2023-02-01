/* WAP to input radius and calculate the area and circumference of a circle 
   [Area of a cicle:3.14*r*r, circumference:2*3.14*r] */
   
#include<stdio.h>

void main()
{
	float radius,area,circumference;
	
	printf("\n Enter the radius :");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	printf("\n Area of a circle %f",area);
	
	circumference=2*3.14*radius;
	printf("\n Circumference %f",circumference);
}
