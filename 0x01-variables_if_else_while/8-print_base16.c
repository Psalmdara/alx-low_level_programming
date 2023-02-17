
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int c = 0;
	char c = 'a';

	while (c <= 9)
	{
		putchar(c);
		c++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
