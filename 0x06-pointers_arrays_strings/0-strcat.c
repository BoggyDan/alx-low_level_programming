
#include "main.h"
/* for strcat() */
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to string that is appended to
 * @src: pointer to string to append
 *
 * Description: a functions that appends the string pointed by @src,
 * to the string pointed by @dest,
 * overwriting the terminating null byte (\0) at the end of @dest,
 * then adds a terminating null byte
 *
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	/* concatenating src and dest */
	/* the resulting string is stored in dest */
	strcat(dest, src);

	return (dest);
}