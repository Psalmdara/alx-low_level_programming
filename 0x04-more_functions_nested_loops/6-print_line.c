#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the
 * terminal.
 * @n: int type
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
