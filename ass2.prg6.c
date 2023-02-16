/* WAP to find out the sum and average of all the numbers within th given range */

#include<stdio.h>

void main()
{
	int m,n,i,sum,avg;
	
	printf("\n Enter m:");
	scanf("%d",&m);
	
	printf("\n Enter n:");
	scanf("%d",&n);
	
	sum=0;
	for(i=m;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n Total=%d",sum);
	
	avg=sum/(n-m);
	printf("\n Average=%d",avg);
}
