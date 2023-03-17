#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value of int type
 * @max: maximum value of int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int count = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (min <= max)
		{
			ptr[count] = min;
			min++;
			count++;
		}
	}
	return (ptr);
}
