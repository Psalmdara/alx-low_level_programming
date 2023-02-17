#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Entry point
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
