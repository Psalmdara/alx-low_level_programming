#include <stdio.h>

/**
 * main - write a program that print base 10 single digit from 0
 * without using variable of type Char
 *
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
