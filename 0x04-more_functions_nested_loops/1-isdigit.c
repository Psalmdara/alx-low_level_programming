#include "main.h"

/**
 * _isupper - Write a function that checks for a digit 0 to 9
 * @c: int type
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
