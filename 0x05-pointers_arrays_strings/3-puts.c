#include "main.h"

/**
 * _puts - wrute a function that prints a string, followed by a new
 * line
 * @str: char type
 *
 * return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
