#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocating  bytes in buf.
 * @file:  name file buffer.
 * Return: A pointer.
 */
char *create_buffer(char *file)
{
	char *buffer_1;

	buffer_1 = malloc(sizeof(char) * 1024);

	if (buffer_1 == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer_1);
}

/**
 * close_file - Closing file.
 * @fd: descriptor for closer.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Coping file conntents.
 * @argc: arguments.
 * @argv: array.
 *
 * Return: 0  success.
 */
int main(int argc, char *argv[])
{
	int from_1, to_2, r_s, w_s;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_1 = open(argv[1], O_RDONLY);
	r_s = read(from, buffer, 1024);
	to_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_1 == -1 || r_s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_s = write(to, buffer, r);
		if (to_2 == -1 || w_s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r_s = read(from_1, buffer, 1024);
		to_2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r_s > 0);

	free(buffer);
	close_file(from_1);
	close_file(to_2);

	return (0);
}

