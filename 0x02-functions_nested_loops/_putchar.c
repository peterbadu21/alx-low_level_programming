#include <unistd.h>

/**
 * _putchar - This program writes the character c to stdout
 * @c: T
 *
 * Return: 1 successful
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
