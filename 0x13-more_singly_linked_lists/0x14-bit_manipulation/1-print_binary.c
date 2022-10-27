#include "main.h"

/**
 * print_binary - Entry point
 * @n: unsigned long int to be converted
 *
 * Return: void
 */

void ptint_binary(unsigned long int n)
{
	unsigned long int m;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		m = n & 1;
		n = n >> 1;
		if (!(n == 0))
			print_binary(n);
		_putchar(m + '0');
	}
}
