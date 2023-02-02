 /* WAP to input a character and print its ASCII value */
 
#include<stdio.h>

void main()
{
	char character;
	
	printf("\n enter character :");
	scanf("%c",&character);
	
	printf("\n ASCII value of character %c=%d",character,character);
}
