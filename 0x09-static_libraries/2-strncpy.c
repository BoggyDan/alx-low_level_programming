#include "main.h"
/* for strncpy() */
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: pointer to where the string is to copied
 * @src: pointer to string which will be copied
 * @n: number of characters or bytes from @src to copy
 *
 *
 * Return: pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* copying n characters from src to dest */
	/* the resulting string is stored in dest */
	strncpy(dest, src, n);

	return (dest);
}
