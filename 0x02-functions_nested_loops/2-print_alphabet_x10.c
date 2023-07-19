#include "main.h"

/**
 * print_alphabet_x10 - write the function that print 10
 * times the alphabet in lowercase l, followed by new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}

	_putchar('\n');
	}
}
