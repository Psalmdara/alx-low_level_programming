#include <stdio.h>

/**
 * main - write a program that print all possible different
 * combinations of two digit numbers separated by ,and a space
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int a = 48;
	int b;

	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
		putchar(a);
		putchar(b);

		if (a == 56 && b == 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

		b++;
		}

		a++;

	}

	return (0);
}
