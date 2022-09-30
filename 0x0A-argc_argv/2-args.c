#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of command line arguments
 * @argv: pointer to array that holds command line arguments values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

