#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int num, j;

	for (num = 0; num <= 9; num++)
	{
		for (j = 0; j <= 14 ; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
