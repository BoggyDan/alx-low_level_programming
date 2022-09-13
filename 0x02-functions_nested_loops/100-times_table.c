#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: parameter
 *
 * Description: A function that prints the n times table starting with 0
 *
 */
void print_times_table(int n)
{
	int i, prod, mult;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = i * mult;

				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}