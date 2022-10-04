#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees grid previously created by alloc_grid function
 * @grid: 2D array to free
 * @height: input height (size)
 *
 * Return: free'd grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}

