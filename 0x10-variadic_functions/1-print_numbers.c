#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator != NULL && i < n - 1)
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
