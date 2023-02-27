#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: is a string charecter
 *
 * Return: string charecter
 */

void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
