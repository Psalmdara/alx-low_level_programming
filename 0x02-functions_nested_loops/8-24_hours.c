#include "main.h"

/**
 * jack_bauer - wrute a function that prints every minute of the day
 * of jack bauer, startung from 00:00 23:59
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int x;
	int i = 0, j = 0, k = 0, l = 0;

	while (x < 1440)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');

		l++;
		if (l > 9)
		{
			l = 0;
			k++;
		}
		if  (k > 5)
		{
			k = 0;
			j++;
		}
		if (j > 9)
		{
			j = 0;
			i++;
		}

		x++;
	}
}
