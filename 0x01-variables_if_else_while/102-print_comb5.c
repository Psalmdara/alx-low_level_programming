#include <stdio.h>

/**
 * main - write a program that print all possible different
 * combinations of two two-digit numbers separated by ,and a space
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
		putchar(a / 10 % 10 + '0');
		putchar(a % 10 + '0');
		putchar(' ');
		putchar(b / 10 % 10 + '0');
		putchar(b % 10 + '0');

		if (a == 98 && b == 99)
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
