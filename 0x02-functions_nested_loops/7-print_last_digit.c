#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number to be passed
 *
 * Description: A function that prints the last digit of a number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit = -lastDigit;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
