#include "main.h"

/**
 * file_error - checks if files can be opened without failure
 * @f_from: file from
 * @f_to: file to
 * @av: arguments vector
 */
void file_error(int f_from, int f_to, char *av[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: always 0
 */
int main(int ac, char *av[])
{
	int file_from, file_to, close_err;
	ssize_t nchars, nwr;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, av);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buff, 1024);
		if (nchars == -1)
			file_error(-1, 0, av);
		nwr = write(file_to, buff, nchars);
		if (nwr == -1)
			file_error(0, -1, av);
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}

