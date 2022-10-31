#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of file to create
 * @text_content: pointer to a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, size;

	if (!filename)
		return (-1);

	/* add rw------- permission, it exists truncate it*/
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		for (size = 0; text_content[size] != '\0'; size++)
			;
		write(file_d, text_content, size);
	}
	close(file_d);

	return (1);
}

