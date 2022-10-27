#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number,
 * 0 if there one or more chars in the string @b that is not  0 or 1
 * 0 if @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, bz;
	unsigned int uint;

	uint = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, bz = 1; i >= 0; i--, bz *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			uint += bz;
	}

	return (uint);
}

