#include "main.h"
/* for strncat() */
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to string that is appended to
 * @src: pointer to string to append
 * @n: maximum number of characters or bytes from @src to append
 *
 *
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	/* appending n characters from src to dest */
	/* the resulting string is stored in dest */
	strncat(dest, src, n);

	return (dest);
}
