#include "main.h"

/**
 * print_sign - write a function that print the sign of a number
 * @n: int type
 *
 * Return: 1, 0, -1 that print +, 0, - when n is greater than,
 * is and less than zero respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
