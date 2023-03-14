#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 *@grid: rows of matrix
 *@height: columns of string
 * Return: a pointer
 */
void free_grid(int **grid, int height)
{
	int i;
	int *ptr;

	for (i = 0; i < height; i++)
	{
		ptr = grid[i];
		free(ptr);
	}
	free(grid);
}
