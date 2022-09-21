#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: pointer to string to e encoded
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (*(s + i) == c[j])
				*(s + i) = n[j];
		}
	}

	return (s);
