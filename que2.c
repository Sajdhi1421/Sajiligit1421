/* WAP to input roll number,name and marks of a student in 5 subjects and calculate the total and average
   marks.Display all the values */
   
#include<stdio.h>
 
void main()
{
	int roll_no,a,b,c,d,e;
	char name[20];
	long total,avg;
	
	printf("\n Enter name :");
	scanf("%s",&name);
	
	printf("\n Enter roll number :");
	scanf("%d",&roll_no);
	
	printf("\n Enter marks :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	printf("\n total marks= %ld",total);
	
	avg=total/5;
	printf("\n average marks= %ld",avg);
}
