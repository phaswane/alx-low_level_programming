#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *@width: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;
	int k;
	int *ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(array + i) = (int *)malloc(width * sizeof(int));
		if (*(array + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				ptr = array[i];
				free(ptr);
			}
			free(array);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			array[k][j] = 0;
		}
	}
	return (array);
}

