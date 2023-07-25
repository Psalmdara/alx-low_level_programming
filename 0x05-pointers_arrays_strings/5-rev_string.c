#include "main.h"

/**
 * rev_string - write a function that reverses a string
 * @s: char type
 *
 * return: 0
 */

void rev_string(char *s)
{
	int i;
	int j;
	char c;
	char d;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	for (j = 0; j < i; j++)
	{
		c = s[j];
		d = s[i];
		s[j] = d;
		s[i] = c;
		i--;
	}
}
