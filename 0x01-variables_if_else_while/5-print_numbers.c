#include <stdio.h>

/**
 * main - write a program that print base 10 single digit from 0
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
