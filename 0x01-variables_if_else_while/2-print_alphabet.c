#include <stdio.h>
#include <ctype.h>

/**
 * Main  - Program that print the alphabets in lower case
 * And followed by a line
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l += 1;
	}
	putchar('\n');
	return (0);
}
