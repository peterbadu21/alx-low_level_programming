#include <stdio.h>

/**
* main - This programm will Print numbers from 0-9
*
* Return: 0 (Successful)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
