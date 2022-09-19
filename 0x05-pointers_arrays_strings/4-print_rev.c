#include "main.h"
/* for strlen() */
#include <string.h>

/**
 * print_rev - prints a string in reverse flowwed by a new line
 * @s: pointer to where the string is stored
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1) ; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
