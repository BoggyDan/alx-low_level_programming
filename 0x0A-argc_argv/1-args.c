#include <stdio.h>

/**
 * main - prints the number of argument passed, followed by a new line
 * @argc: number of command line arguments
 * @argv: pointer to array that holds command line arguments values
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

