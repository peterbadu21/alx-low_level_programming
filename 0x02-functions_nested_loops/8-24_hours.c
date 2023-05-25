#include "main.h"

/**
 * jack_bauer - This progam prints every minute of the day
 * starts from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, c;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (c < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
			c++;
		}
		i++;
	}
}
