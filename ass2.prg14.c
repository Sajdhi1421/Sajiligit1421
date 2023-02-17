/* WAP to count a number and print its reverse number.Also check the number is polindrome or not
   [input no=reverse no/Polindrome]   */
   
#include<stdio.h>

void main()
{
	int no,rem,rev,n;
	
	printf("\n Enter any number:");
	scanf("%d",&no);
	
	n=no;
	rev=0;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("\n Reverse=%d",rev);
	
	if(n==rev)
	{
		printf("\n It is a palindrome number");
	}
	else
	{
		printf("\n It is not a palindrome number");
	}
}
