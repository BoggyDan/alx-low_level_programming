#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: index, starting from 0 of the bit to set
 *
 * Return: 1 if it succeeds, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	if (*n & num)
		*n ^= num;

	return (1);
}

