/* WAP to input roll number, name, marks and phone number of a student and display the values */

#include<stdio.h>

void main()
{
	char name;
	int roll_no,marks;
	double phone_no;
	
	printf("\n Enter name :");
	scanf("%s",&name);
	
	printf("\n Enter roll number :");
	scanf("%d",&roll_no);
	
	printf("\n Enter marks :");
	scanf("%d",&marks);
	
	printf("\n Enter phone number :");
	scanf("%lf",&phone_no);
}
