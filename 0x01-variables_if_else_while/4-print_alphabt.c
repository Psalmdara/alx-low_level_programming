#include <stdio.h>

/**
 * main - write a program that print lower alphabets except q and e
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')

		putchar(ch);
	}

	putchar('\n');

	return (0);
}
