#include "main.h"

/**
 * _strlen - write a function that returns the length of a string
 * @s: char type
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
