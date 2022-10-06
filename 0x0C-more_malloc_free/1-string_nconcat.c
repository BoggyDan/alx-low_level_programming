#include "main.h"

/**
 * string_nconcat - concateneates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes of @s2 to copy
 *
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *newString;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;

	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;

	if (j > n)
		j = n;

	newString = malloc(sizeof(char) * (i + j + 1));

	if (newString == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		newString[k] = s1[k];

	for (k = 0; k < j; k++)
		newString[k + i] = s2[k];

	newString[i + j] = '\0';

	return (newString);
	free(newString);
}

