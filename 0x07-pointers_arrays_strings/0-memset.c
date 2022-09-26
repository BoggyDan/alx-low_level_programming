#include "main.h"
/* for memset() */
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 *
 * Return: pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}

