#include <stdio.h>

/**
 * main - Fizz Buzz
 *
 * Description: prints the numbers from 1 to 100.
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if ((num % 3 == 0) && (num % 5 != 0))
			printf("Fizz ");
		else if ((num % 3 != 0) && (num % 5 == 0))
			printf("Buzz ");
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	printf("Buzz");
	printf("\n");

	return (0);
}
