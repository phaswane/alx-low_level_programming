#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
