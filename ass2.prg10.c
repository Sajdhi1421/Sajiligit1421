/* If a number 972 is entered through the keyboard,your program should print "Nine Seven Two". Write the program
   such that it does this for any positive integers */
   
#include<stdio.h>

void main()
{
	int i;
	char a[100];
	
	printf("\n Enter any number:");
	scanf("%s",&a);
	
	for(i=0;i<=a[i];i++)
	{
		if(a[i]=='0')
		printf(" Zero");
		if(a[i]=='1')
		   printf(" One");
		if(a[i]=='2')
		   printf(" Two");
		if(a[i]=='3')
		   printf(" Three");
		if(a[i]=='4')
		   printf(" Four");
		if(a[i]=='5')
		   printf(" Five");
		if(a[i]=='6')
		   printf(" Six");
		if(a[i]=='7')
		   printf(" Seven");
		if(a[i]=='8')
		   printf(" Eight");
		if(a[i]=='9')
		   printf(" Nine");
	}
}
