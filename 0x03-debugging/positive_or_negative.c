#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - positive anything is better than negative nothing
 * @i: number to be checked
 *
 * Description: This program will prints whether the number stored in the
 * variable i is positive or negative or even equal to zero.
 *
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	} else
	{
		printf("%d is zero\n", i);
	}
}

