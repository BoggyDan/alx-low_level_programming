#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the mem previously allocated with a call to malloc
 * @old_size: size in bytes of the allocated space for @ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: @ptr if @new_size == @old_size
 *	   malloc(@new_size) if @ptr == NULL
 *	   NULL if @new_size == 0 && @ptr != NULL
 *	   Pointer to reallocated memory
 *	   NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *realloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	realloc = malloc(new_size);

	if (realloc == NULL)
		return (NULL);

	for (i = 0; i < (old_size || i < new_size); i++)
		*(realloc + i) = clone[i];

	free(ptr);

	return (realloc);
	free(realloc);
}

