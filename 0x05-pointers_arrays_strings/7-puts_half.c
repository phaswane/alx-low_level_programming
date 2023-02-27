#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: is a string charecter
 *
 * Return: half of string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
