#include <stdio.h>

// Double quotes are not used in C
// use singular quotes for a character


int main()
{
	long c,newspaces;
	char full_string[50];
	newspaces = 0;
	c = 0;	

	printf("Enter a string: ");
	scanf("%s\n", full_string);

	for ( full_string[c]; c == ' '; ++c)
		printf("%ld", c);
	printf("%s", full_string);
	/*while ((c =getchar()) != EOF)		
		putchar(c);
		full_string = full_string +c;
		if(putchar(c) == ' ')
			c = 'a';	
		putchar(c);
	printf("%s", full_string);
	*/
		//if (newspaces > 1)
			//	c = "";
	//printf("%ld\n", newspaces);
}
