#include "main.h"

/**
 * _islower - write a function that checks for lowercase character
 * @c: int type
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
