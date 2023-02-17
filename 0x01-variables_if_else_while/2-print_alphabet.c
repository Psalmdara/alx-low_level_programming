#include <stdio.h>
#include <ctype.h>
/**
 * Main  - Program that prints the alphabets in lower case,
 *         followed by a line
 * Return: 0
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
