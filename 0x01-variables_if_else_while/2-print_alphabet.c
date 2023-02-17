#include <stdio.h>
#include <ctype.h>
/**
 * Main  - Program that prints the alphabets in lower case,
 *         followed by a line
 * You can only use the putchar twice
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
