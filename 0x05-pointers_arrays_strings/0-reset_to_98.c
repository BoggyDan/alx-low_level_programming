#include "main.h"

/**
 * reset_to_98 - pass by value
 * @n: pointer as parameter
 *
 * Description: a function that takes a pointer to an int as paramenter
 * and updates the value it points to 98
 *
 */
void reset_to_98(int *n)
{
	*n = 98;
}
