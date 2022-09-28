#include "main.h"
/* for memcpy() */
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to where memory area is to be copied
 * @src: pointer to where memory are will be copied from
 * @n: number of bytes to be copied
 *
 *
 * Return: pointer to where memory area is copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
