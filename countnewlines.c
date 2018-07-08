#include <stdio.h>

int main()
{
	long c,nl;
	nl = 0;
	while ((c =getchar()) != EOF)
		// Double quotes are not used in C
		// use singular quotes for a character
		if (c == '\n')
			++nl;
	printf("%ld\n", nl);
}
