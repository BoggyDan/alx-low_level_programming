#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int j, space;

	if (n > 0)
	{
		for (j = 0; j < n ; j++)
		{
			for (space = 0; space < j; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
