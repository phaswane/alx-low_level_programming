#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: is the size of triangle
 *
 * @#: is the charector to print triangle
 *
 * Return: print a triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j >= 0; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
