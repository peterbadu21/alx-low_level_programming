#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is a program that prints alphabelts
 * Return: 0 (successful)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
