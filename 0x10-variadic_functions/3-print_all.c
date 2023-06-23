#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - a function that prints anything
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int z = 0;

	va_list list_arg;

	va_start(list_arg, format);

	while (format[z] != '\0')
	{
		switch (format[z])
		{
		case 'c':
			printf("%c, ", va_arg(list_arg, int));
			break;
		case 'i':
			printf("%d, ", va_arg(list_arg, int));
			break;
		case 'f':
			printf("%f, ", va_arg(list_arg, double));
			break;
		case 's':
			printf("%s", va_arg(list_arg, char*));
			break;
		}
		z++;
	}

	printf("\n");
	va_end(list_arg);
}
