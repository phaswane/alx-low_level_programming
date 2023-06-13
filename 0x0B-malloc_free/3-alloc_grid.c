#include "main.h"
#include  <stdlib.h>

/**
 * alloc_grid - it returns a pointer to a 2 dimensional array of integers
 *
 * @width: is the horizonatl row of the 2D array
 * @height: is the vertical column of the 2D array
 *
 * Return: a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc((sizeof(int *) * height));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
