#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 *
 * Return: NUL if @width or @height is -ve
 * NULL on failure
 * pointer to 2D arry
 */
int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));

	/* make a malloc per pointer */
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));

		if (!p[i])
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			p[a][b] = 0;
	}
	return (p);
}

