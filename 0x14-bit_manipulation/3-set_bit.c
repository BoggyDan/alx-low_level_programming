#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: index, starting from 0 of the bit to set
 *
 * Return: 1 if it succeeds, -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}

