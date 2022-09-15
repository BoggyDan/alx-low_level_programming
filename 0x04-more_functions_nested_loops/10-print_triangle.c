#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (j = 1; j <= size ; j++)
		{
			/* @k for spaces */
			for (k = j; k < size; k++)
				_putchar(' ');

			/* @i for # */
			for (i = 1; i <= j; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
