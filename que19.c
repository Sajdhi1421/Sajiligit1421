/* WAP to find whether a given number is even or odd using conditional operator */

#include<stdio.h>

void main()
{
	int no;
	
	printf("\n enter number :");
	scanf("%d",&no);
	
	printf("\n The number is %s",no%2==0?"Even":"Odd");
	
}
