#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  function that frees a 2 dimensional grid
 *
 * @grid: is a previously created 2D grid
 * @height: the vertical length of the 2D grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, j;

	if (grid == NULL)
	{
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
		}
	}
}
