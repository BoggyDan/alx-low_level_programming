#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Description: A function that prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int i, j, multiple;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiple = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar('0');
			}
			else if (multiple >= 10)
			{
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
			else if ((multiple < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((multiple % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
