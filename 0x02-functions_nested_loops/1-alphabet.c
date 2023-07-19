#include "main.h"

/**
 * print_alphabet - write the function that print the alphabet in lowercase
 * followed by new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
