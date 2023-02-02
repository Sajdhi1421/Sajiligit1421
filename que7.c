/*WAP to input 4 integers a,b,c,d and check that the equation 3*a+3*b+3*c=3*d is satisfied
  or not */
  
#include<stdio.h>

void main()
{
	long long a,b,c,d;
	
	printf("\n Enter the integers a,b,c,d :");
	scanf("%lld,%lld,%lld,%lld",&a,&b,&c,&d);
	
	if(3*a+3*b+3*c=3*d)
	{
		printf("\n equation is satisfied");
	}
	else
	{
		printf("\n equation is not satisfied");
	}
}
