#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: pointer to an array
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of the first element. -1 if no matches or if @size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size ; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}

