#include "main.h"

/**
 * _isalpha - write a function that checks for lowercase or uppercase
 * character
 * @c: int type
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
