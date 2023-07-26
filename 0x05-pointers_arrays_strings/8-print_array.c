#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array
 * of integers followed by a new line.
 * @a: pointer to int
 * @n: int type
 *
 *Return: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
