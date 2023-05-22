#include <stdio.h>

/**
* main - This program Prints the alphabets in lowercase letters, except letter e and q
*
* Return: 0 (Successful)
*/
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
	    if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}
