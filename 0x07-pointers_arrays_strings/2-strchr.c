#include "main.h"
/* for strchr() */
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to be scanned
 * @c: character to be located
 *
 *
 * Return: pointer to the first occurence of character @c
 */
char *_strchr(char *s, char c)
{
	char *found;

	if (strchr(s, c))
	{
		found = strchr(s, c);
		return (found);
	}
	else
		return (NULL);
}
