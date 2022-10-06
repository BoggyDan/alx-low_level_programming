#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: range minimum to allocate in memory
 * @max: range maximum to allocate in memory
 *
 * Return: pointer to the newly created array
 *	   NULL if @min > @max
 *	   NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	while (i <= max - min)
		arr[i++] = t++;

	return (arr);
	free(arr);
}

