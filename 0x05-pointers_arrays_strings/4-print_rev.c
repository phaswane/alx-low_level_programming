#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: is the input charectors
 *
 * Return: string
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}

	_putchar('\n');
}
