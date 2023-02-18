/* WAP to print the triangle using while loop 

        *  *  *  *  *  *  *  *  *   
		   *  *  *  *  *  *  *               
			  *  *  *  *  *     
			     *  *  *   
			        *                              */

#include<stdio.h>
void main()
{
	int r,c,s;
	
	r=5;
	while(r>=1)
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
		r--;
	}
}
