#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: pointer to array that holds command line arguments values
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

