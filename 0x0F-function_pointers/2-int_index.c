#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 *
 * @size: number of elements of the array
 * @array: is the array of integers
 * @cmp: a function pointer
 *
 * Return: 0 always
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (0);
	if (cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
