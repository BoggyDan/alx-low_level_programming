#include "main.h"

/**
 * cap_string - capitalizes words of a string
 * @s: string to be changed
 *
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	/* loop through characters of the string */
	/* except the null character */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* check if first character is in lowercase */
		/* and if there are separators of words */
		/* then convert it to uppercase */
		if (i == 0 && *(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) -= 32;

		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == *(s + i) && (*(s + i + 1) >= 97 && *(s + i +
							1) <= 122))
				*(s + i + 1) -= 32;
		}
	}

	return (s);
}
