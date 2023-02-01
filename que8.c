/* WAP to input side of a square and calculate area [area of square=side*side] */

#include<stdio.h>

void main()
{
   int side,area;
 
   printf("\n Enter the Side : ");
   scanf("%d", &side);
 
   area = side * side;
   printf("\n Area of Square : %d", area);
}
