#include "main.h"
/* for strpbrk() */
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to be scanned
 * @accept: pointer string containing characters or bytes to match
 *
 *
 * Return: pointer to byte in @s that matches one of the bytes in @accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *res;

	res = strpbrk(s, accept);

	return (res);
}
