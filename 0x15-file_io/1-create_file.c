#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: is the name of the file to be created
 * @text_content: is a NULL termited string to write to the file
 *
 * Returns: - -1 on failure
 *		otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	 w = write(fd, text_content, len);

	close(fd);
	if (w == -1)
		return (-1);

	return (1);
}
