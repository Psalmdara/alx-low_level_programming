#include "main.h"

/**
 * swap_int - write a function that swaps the values of two integers
 * @a: int type
 * @b: int type
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
