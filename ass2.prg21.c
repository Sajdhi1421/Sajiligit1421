/* WAP to print the sum and average of first n even numbers */

#include<stdio.h>

void main()
{
	int i,n,sum;
	float avg;
	sum=0;
	
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("\n Sum of all even numbers from 1 to %d=%d",n,sum);
	
	avg=(n+2)/2;
	printf("\n Average of all even numbers from 1 to %d=%.2f",n,avg);
}
