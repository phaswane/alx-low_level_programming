#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string arguments with a separator
 * @separator: - string to be printed between the strings
 * @n: - number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ptr;

	if (separator == NULL || *separator == 0)
		return;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char *);

		if (ptr == NULL)
			ptr = "(nil)";

		printf("%s%s", separator, ptr);
	}

	printf("\n");
	va_end(list);
}
