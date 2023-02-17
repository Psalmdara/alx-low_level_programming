#include <stdio.h>
#include <ctype.h>

/**
 * Main  - Program that prints the alphabets in lower case,
 * 	   followed by a line
 * You can only use the putchar
 * Return: 0
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
