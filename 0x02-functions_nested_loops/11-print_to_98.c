#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: number to begin print
 *
 * Description: A function that prints all natural numbers from n to 98
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
			else if (n == 98)
			{
				printf("%d", n);
				break;
			}
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
				n++;
			}
			else if (n == 98)
			{
				printf("%d", n);
				break;
			}
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
