#include <stdio.h>

/**
 * main - write a program that print all possible combinations of
 * single-digit numbers separated by ,and a spacefollowed by a
 * new line
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
