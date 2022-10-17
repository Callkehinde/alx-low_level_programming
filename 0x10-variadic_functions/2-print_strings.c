#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @seperator: seperator between two strings
 * @n: strings to be printed
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	char *arg;
		unsigned int i;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			arg = va_arg(ap, char*);
			if (arg != NULL)
				printf("%s", arg);
			else
				printf("(nil)");
			if (seperator != NULL && i < n - 1)
				printf("%s", seperator);
		}
		va_end(ap);
		printf("\n");
}
