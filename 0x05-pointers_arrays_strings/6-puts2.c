#include "main.h"

/**
 * _strlen - return the length of string
 * @s: pointer char type
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i;

	return (j);
}

/**
 * puts2 - Write a function that prints every other character of a
 * string, starting with the first character, followed by a new line
 * @str: char type
 *
 * Retutn: 0
 */

void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
