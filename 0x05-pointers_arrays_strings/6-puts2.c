#include "main.h"
/* for strlen() */
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to where the string is stored
 *
 * Description: prints every other character of a string,
 * starting with the first charchter, followed by a new line
 *
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0 ; i < len ; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
