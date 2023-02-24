#include "main.h"

/**
 * print_square - prints the squire, followed by new line
 *
 * @size: size of squire
 *
 * @#: character to print squire
 *
 * Return: print squire
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	_putchar('\n');
}
