#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - appending characters at the end of a file
 * @filename: pointer
 * @text_content: details of  file
 * Return: 1 success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
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

	file_s = open(filename, O_WRONLY | O_APPEND);

	if (file_s == -1)
		return (-1);

	write(file_s, text_content, a);

	return (1);
}
