/* WAP to find out the largest of three numbers */

#include<stdio.h>

void main()
{
	int n1,n2,n3;
	
	printf("\n Enter three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2&&n1>n3);
	printf("\n largest number is %d",n1);
	
	if(n2>n1&&n2>n3);
	printf("\n largest number is %d",n2);
	
	if(n3>n1&&n3>n2);
	printf("\n largest number is %d",n3);
}
