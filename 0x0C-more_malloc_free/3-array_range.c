#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum index
 * @max: maximum index
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int length, i;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;

	ptr = malloc(sizeof(int) * length);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		ptr[i] = min;
		min++;
	}
	ptr[length - 1] = max;

	return (ptr);
}
