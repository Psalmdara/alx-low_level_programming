#include <unistd.h>

/**
 * _putchar - writes the character c to standout
 * @c - character to print
 *
 * Return: 0
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
