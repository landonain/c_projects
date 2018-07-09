#include <stdio.h>

int main()
{
	long c,newtab;
	newtab = 0;
	while ((c =getchar()) != EOF)
		// Double quotes are not used in C
		// use singular quotes for a character
		if (c == '	')
			++newtab;
	printf("%ld\n", newtab);
}
