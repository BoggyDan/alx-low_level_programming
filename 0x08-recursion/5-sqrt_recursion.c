#include "main.h"

/**
 * _sqrt - sqrt recursive function
 * @n: square root of number to be returned
 * @i: integer incrementer
 *
 * Return: square root of @n
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: an integer
 *
 * Return: square root of @n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

