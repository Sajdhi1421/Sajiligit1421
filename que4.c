/* WAP to input a number and print its cube */

#include<stdio.h>

void main()
{
	int no,cube;
 
    printf(" \n Enter integer value : ");
    scanf("%d",&no);
  
    cube = no*no*no;
  
    printf("\n cube of a given number = %d",cube);
}
