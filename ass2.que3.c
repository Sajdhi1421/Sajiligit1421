/* WAP to convert a small letter into capital letter and vice versa */

#include <stdio.h>  

void main ()  
{  
    char small,large;
    int ascii;  
      
    printf (" Enter the Large alphabet: ");  
    scanf (" %c", &large);  
    ascii = large + 32;  
    printf ("\n %c character in small alphabet is: %c", large, ascii);  
      

    printf ("\n\n Enter the Small alphabet: ");  
    scanf (" %c", &small);  
    ascii = small - 32;  
    printf ("\n %c character in large alphabet is: %c", small, ascii);  
    
}

