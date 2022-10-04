#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer t a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to a string
 *
 * Return: NULL if str is NULL. pointer ta duplicated string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	p = (char *)malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (j = 0; j <= i ; j++)
		p[j] = str[j];

	return (p);
	free(p);
}

