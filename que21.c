/* WAP to input choice (1 or 2). If choise is 1 print the area of a circle otherwise print the 
   circumference of circle. Input the radius from user */
   
#include<stdio.h>

void main()
{
    int no;
    float radius,area,circumference;
	
	printf("\n enter radius :");
	scanf("%f",&radius);
	
	printf("\n choose 1 or 2 :");
	scanf("%d",&no);
	
	area=3.14*radius*radius;
	circumference=2*3.14*radius;
	
	if(no==1)
	{
		printf("\n area of circle = %f",area);
	}
	else if(no==2)
	{
		printf("\n circumference =%f",circumference);
	}
	else
	{
		printf("\n invalide input ");
	}	
} 
