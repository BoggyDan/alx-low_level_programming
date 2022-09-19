#include "main.h"
/* for strcpy() */
#include <string.h>

/**
 * _strcpy - copies string
 * @dest: pointer to where string is copied
 * @src: pointer to string to be copied
 *
 * Description: a functions that copies the string pointed by @src,
 * including the terminating null byte (\0),
 * to the buffer pointed by @dest
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	/* copying src to dest */
	strcpy(dest, src);

	return (dest);
}
