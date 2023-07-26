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
 * puts_half - Write a function that prints half of a string
 * followed by a new line
 * @str: char type
 *
 * Retutn: 0
 */

void puts_half(char *str)
{
	int i;
	int size = _strlen(str);

	if (size % 2 == 0)
	{
		i = size / 2;
	}
	else
	{
		i = (size / 2) + 1;
	}

	for (i = i; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
