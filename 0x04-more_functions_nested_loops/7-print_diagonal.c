#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line in
 * the terminal.
 * @n: int type
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 0; i <= j; i++)
			{
				if (i != j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
