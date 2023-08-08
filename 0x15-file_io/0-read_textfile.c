#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reading file
 * @filename: variable
 * @letters: size
 * Return: total number of characters 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_s, let_s, w_s;
	char *text_p;

	text_p = malloc(letters);
	if (text_p == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file_s = open(filename, O_RDONLY);

	if (file_s == -1)
	{
		free(text_p);
		return (0);
	}

	let_s = read(file_s, text_p, letters);

	w_s = write(STDOUT_FILENO, text_p, let_s);

	close(file_s);

	return (w_s);
}
