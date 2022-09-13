#include <unistd.h>
/* for isalpha() */
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - alphabet check
 * @c: character to be checked by code
 *
 * Description: A function that checks for alphabetic character
 *
 * Return: 1 if character is a letter. 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
