#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function as parameter on each element of array
 *
 * @size: the size of the array
 * @array: is the array of integers
 * @action: a function pointer to a function to be executed
 *
 * Return: 0 always
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
