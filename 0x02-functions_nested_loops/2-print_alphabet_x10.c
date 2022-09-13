#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Description: A function that prints 10 times the alphabet in lower case
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
