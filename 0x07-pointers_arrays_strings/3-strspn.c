#include "main.h"
/* for strspn() */
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to be scanned
 * @accept: pointer string containing characters to match
 *
 *
 * Return: number of bytes in the initial segment of @s
 * which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);

	return (len);
}
