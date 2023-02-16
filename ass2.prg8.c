/* WAP to print the factorial of a given number */

#include<stdio.h>

void main()
{
	int no,f,i;
	
	printf("\n Enter any number:");
	scanf("%d",&no);
	
	f=1;
	for(i=1;i<=no;i++)
	{
		f=f*i;
	}
	printf("\n %d",f);
}
