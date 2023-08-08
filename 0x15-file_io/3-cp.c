#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - copping contents of a file1 to  file2
* @argc: argument
* @argv: string
* Return: 0 successfull
*/

int main(int argc, char *argv[])
{
	int file_from1, file_to2;
	int num_1 = 1024, num_2 = 0;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from1 = open(argv[1], O_RDONLY);
	if (file_from1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from1), exit(99);
	}
	while (num_1 == 1024)
	{
		num_1 = read(file_from1, buf, 1024);
		if (num1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num_2 = write(file_to2, buf, num_1);
		if (num_2 < num_1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(file_from1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from1), exit(100);

	if (close(file_to2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to2), exit(100);

	return (0);
}
