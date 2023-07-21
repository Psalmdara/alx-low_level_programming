#include "main.h"

/**
 * print_triangle - Write a function that print a triangle
 * @size: int type
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, s;;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				s = size - j - 1;
				if (i < s)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
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
