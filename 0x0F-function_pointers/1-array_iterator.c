#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to fucntion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}

