#include "main.h"

/**
 * print_rev - write a function that prints a string, in reverse,
 * followed by a new
 * line
 * @s: char type
 *
 * return: 0
 */

void print_rev(char *s)
{
	int i;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');
}
