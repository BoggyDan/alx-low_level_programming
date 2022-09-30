#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: pointer to array that holds command line arguments values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1 ; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}

		printf("%d\n", product);
	}

	return (0);
}


