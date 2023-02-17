#include <stdio.h>
#include <stdlib.h>
/**
 * Main - main block
 * 
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
