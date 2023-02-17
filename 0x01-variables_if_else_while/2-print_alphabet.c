#include <stdio.h>
#include <stdlib.h>
/**
 * Main - A program that print the alphebets in lower case,
 *        followwd by a line
 * Description: You can only use putchar twice in your code
 *
 * Return: 0
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
