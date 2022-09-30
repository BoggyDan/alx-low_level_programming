#include <unistd.h>
/* for islower() */
#include <ctype.h>
#include "main.h"

/**
 * _islower - lowecase check
 * @c: character to be ckecked
 *
 * Description: A function that checks for lowercase character
 *
 * Return: 1 if character is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
