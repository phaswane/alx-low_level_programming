#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - a function print strings
 *
 * @separator: a character between the strings
 * @n: is the number of strings passed as arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list_arg;

	va_start(list_arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%s", va_arg(list_arg, char*));
		}
		else
		{
			printf("%s", va_arg(list_arg, char*));

			if (i != (n - 1))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(list_arg);
}
