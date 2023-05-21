#include <stdio.h>
#include <unistd.h>

/**
 * main - This program prints a line with fput function
 * Return: 1 (Successful)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
