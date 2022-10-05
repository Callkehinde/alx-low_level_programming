#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i;
	int m;

	for (i = 0; i < 24; i++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}

