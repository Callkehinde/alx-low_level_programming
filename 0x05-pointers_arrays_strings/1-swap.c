#include "main.h"

/**
 * swap_int - swap the values of int b and a
 * @b: first int to swap
 * @a: second int to swap
 *
 * Return: void
 */
void swap_int(int *b, int a)
{
	int c;

	c = *b;
	*b = *c;
	*c = b;
}
