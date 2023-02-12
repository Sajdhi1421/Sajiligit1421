/*WAP to input two integers and determine that first is multiple of second */

#include<stdio.h>

void main()
{
	int n1,n2;
	
	printf(" Enter First integer:");
	scanf("%d",&n1);
	
	printf("Enter Second integer:");
	scanf("%d",&n2);
	
	if(n1%n2==0)
	{
		printf("\n %d is multiple of %d",n1,n2);
	}
	else
	{
		printf("\n %d is not multiple of %d",n1,n2);
	}
}
