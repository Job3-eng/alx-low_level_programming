#include <stdio.h>
#include "main.h"
/**
 * main - Printing  number of arguments
 * @argc: total number of argumentsd on command line
 * @argv: Array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (a = 0; *argv; a++, argv++)
			;

		printf("%d\n", a - 1);
	}

	return (0);
}
