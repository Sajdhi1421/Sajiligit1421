/*WAP to input width and height of a rectangle and calculate the area and perimeter
  [Area of rectangle:width*height,Perimeter of rectangle:2*width + 2*height] */
  
#include<stdio.h>

void main()
{
	float width,height;
	long area,perimeter;
	
	printf("\n Enter width :");
	scanf("%f",&width);
	
	printf("\n Enter height :");
	scanf("%f",&height);
	
	area=width*height;
	printf("\n Area of rectangle %ld",area);
	
	perimeter=2*width + 2*height;
	printf("\n Perimeter of rectangle %ld",perimeter);
}
