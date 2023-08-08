#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - main function for creating a file.
 * @filename: pointer
 * @text_content: file details
 * Return: 1 success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int a = 0, file_s;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[a] != '\0')
	{
		a++;
	}

	file_s = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file_s, text_content, a);

	return (1);
}
