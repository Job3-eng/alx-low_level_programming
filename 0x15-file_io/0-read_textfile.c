#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reading text in a  file.
 * @filename: file
 * @letters: number of characters
 * Return: number when successfull
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufffer;
	ssize_t fd_p;
	ssize_t w_i;
	ssize_t t_i;

	fd_p = open(filename, O_RDONLY);
	if (fd_p == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t_i = read(fd_p, bufffer, letters);
	w_i = write(STDOUT_FILENO, bufffer, t_i);

	free(bufffer);
	close(fd_p);
	return (w_i);
}

