#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - a function prints numbers
 *
 * @separator: a separating charector
 * @n: the number of arguments passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list_arg;

	va_start(list_arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(list_arg, int));
		}
		else
		{
			printf("%d", va_arg(list_arg, int));

			if (i != (n - 1))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(list_arg);
}
