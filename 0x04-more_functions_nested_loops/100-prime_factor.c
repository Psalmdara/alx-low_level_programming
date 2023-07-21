#include <stdio.h>

/**
 * mwin - write a  program that finds and prints the largest prime
 * factor of the number 612852475143, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long i, j;

	i = 612852475143;

	for (j = 2; i > j; j++)
	{
		while (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%lu", j);
	putchar('\n');
	return (0);	
}
