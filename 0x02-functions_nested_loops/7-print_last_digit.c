#include "main.h"

/**
 * print_last_digit - write the function that prints the laat digit
 * of a number
 * @n: int type
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
}
