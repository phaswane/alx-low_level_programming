#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints arguments with a separator
 *
 * @separator: - the string printed between the arguments
 * @n: - number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		separator = " ";

	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));

	for (i = 1; i < n; i++)
		printf("%s%d", separator, va_arg(list, int));

	printf("\n");

	va_end(list);

}
