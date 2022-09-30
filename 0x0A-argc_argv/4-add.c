#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: pointer to array that holds command line arguments values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, count = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0 ; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[count]);
		count++;
	}

	printf("%d\n", sum);

	return (0);
}

