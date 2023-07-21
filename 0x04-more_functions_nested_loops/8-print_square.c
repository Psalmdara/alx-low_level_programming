#include "main.h"

/**
 * print_square - Write a function that prints a square, followed by
 * a new line
 * @size: int type
 *
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
