/* WAP to print following star pattern using while loop
            *
		   ***
		  *****
		 *******     */
	   
#include<stdio.h>

void main()
{
	int r,c,s;
	
	r=1;
	while(r<=4)
	{
		s=r;
		while(s<=4)
		{
			printf("  ");
			s++;
		}
		c=2;
		while(c<=r*2)   
		{
			printf(" *");
			c++;
		}
		printf("\n");
		r++;
	}
}
