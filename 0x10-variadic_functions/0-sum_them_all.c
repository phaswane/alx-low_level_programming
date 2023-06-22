#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: the number of arguments
 *
 * Return: 0 always
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list_arg;

	va_start(list_arg, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list_arg, int);
	}

	va_end(list_arg);

	return (sum);
}
