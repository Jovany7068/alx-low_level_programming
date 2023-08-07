#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * and prints it to the posix standard output
 * @letters: the number of letters it should read and print
 *
 * Returns: The atual number of letters it could read and print
 * 0 if file cannot be opened or read, or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t t;
	ssize_t W;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	W = Write(STDOUT_FILENO, buf, t);

free(buf);
closed(fd);
return (W);
}
