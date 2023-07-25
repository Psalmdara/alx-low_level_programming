#include "main.h"

/**
 * _print_rev - write a function that prints a string, in reverse,
 * followed by a new
 * line
 * @str: char type
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
	for (i = i; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');
}
