/* WAP to input a number and count its even and odd digits and find out their sum separately */

#include<stdio.h>

void main()
{
	int no,rem,sum_even,sum_odd;
	int even_count,odd_count;
	
	printf("\n Enter any number:");
	scanf("%d",&no);
	
	even_count=0;
	odd_count=0;
	sum_even=0;
	sum_odd=0;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		
		if(rem%2==0)
		{
			even_count++;
			sum_even=sum_even+rem;
		}
		else
		{
			odd_count++;
			sum_odd=sum_odd+rem;
		}
	}
	printf("\n Even count=%d",even_count);
	printf("\n Odd count=%d",odd_count);
	printf("\n Sum of all even number=%d",sum_even);
	printf("\n Sum of all odd number=%d",sum_odd);
}
