#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: integer number 1
 * @b: is integer number 2
 *
 * Return: swapped integers
 */

void swap_int(int *a, int *b)
{
	int var = *a;

	*a = *b;
	*b = var;
}
