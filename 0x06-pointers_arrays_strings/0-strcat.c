#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
