#include <stdio.h>

/**
 * main - write a program that print all possible different
 * combinations of three digit numbers separated by ,and a space
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int a = 48;
	int b;
	int c;

	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
		c = b + 1;
		while (c <= 57)
		{
		putchar(a);
		putchar(b);
		putchar(c);

		if (a == 55 && b == 56 && c == 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

		c++;
		}

		b++;
		}

		a++;

	}

	return (0);
}
