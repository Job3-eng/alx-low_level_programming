#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - main function for creating a file.
 * @filename: pointer
 * @text_content: file details
 * Return: 1 success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd_s, w_s, len_s = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_s = 0; text_content[len_s];)
			len_s++;
	}

	fd_s = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_s = write(fd_s, text_content, len_s);

	if (fd_s == -1 || w_s == -1)
		return (-1);

	close(fd_s);

	return (1);
}

