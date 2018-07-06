#include <stdio.h>

/*
	 copy input to output; 2nd version 
  	 EOF end of file is considered an int and not a char
  	 the output of the printf ==  -1.
	 Getchar is an input based function that pulls 
	 from the user.
*/

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) /* || (c = getchar()) == EOF) */
        putchar(c);    
	printf("%d", EOF);
}
