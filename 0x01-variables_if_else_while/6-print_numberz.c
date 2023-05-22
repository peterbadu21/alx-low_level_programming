#include <stdio.h>

/**
* main - This program prints numbers from 0-9 using only putchar
*
* Return: 0 (Successful)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
