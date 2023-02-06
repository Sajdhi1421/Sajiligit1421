/* WAP to input marks of a student and print the result (pass/fail) using conditional
   operator */
   
#include<stdio.h>

void main()
{
	int marks;
	
	printf("\n Enter marks :");
	scanf("%d",&marks);
	
	printf("\n Result=%s",marks>40?"Pass":"Fail");
}
