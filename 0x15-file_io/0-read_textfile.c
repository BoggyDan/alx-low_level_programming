#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard nput
 * @filename: name of the file
 * @letters: number of letters read or printed
 *
 * Return: actual number of letters, 0 if the file cannot be opend
 * 0 if @filename is NULL or 0, 0 if write function fails or
 * or does not write the expected amount
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buff;
	ssize_t no_read, no_write;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	no_read = read(file_d, buff, letters);
	no_write = write(STDOUT_FILENO, buff, no_read);
	if (no_write == -1)
		return (0);

	close(file_d);
	free(buff);

	return (no_write);
}

