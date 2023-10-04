#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reading the file  with STDOUT.
 * @filename: the file
 * @letters: letters to be read.
 * Return: w- for actual numbers 0 when file is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fd);
	return (a);
}
