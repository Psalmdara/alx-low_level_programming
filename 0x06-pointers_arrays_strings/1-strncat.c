#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int type
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	if (n <= 0)
	{
		return (dest);
	}

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	/*dest[i++] != '\0';*/
	return (dest);
}
