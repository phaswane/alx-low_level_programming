#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to stdout.
 *
 * @str: string input
 * Retuns: print string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
