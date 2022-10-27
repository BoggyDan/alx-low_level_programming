#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit of which the value is returned
 * @index: the index, starting from 0 of the bit to get
 *
 * Return: value of the bit at @index, -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);
	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
			return (n & 1);
	}

	return (-1);
}

