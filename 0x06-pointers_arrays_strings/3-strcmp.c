#include "main.h"
/* for strcmp() */
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: an integer value based on the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	/* comparing s1 and s2 */
	res = strcmp(s1, s2);

	return (res);
}
