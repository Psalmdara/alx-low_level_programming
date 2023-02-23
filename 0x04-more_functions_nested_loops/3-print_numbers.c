#include "main.h"
/**
 * print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
	char c;

	c = '0';
	while (c < '10')
	{
		_putchar (c);
		c++;
	}

	_putchar ('\n');
}
