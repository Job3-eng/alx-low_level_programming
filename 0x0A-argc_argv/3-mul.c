#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - takes two integer arguments then prints product
 * @argc: Number of arguments
 * @argv: Array of size argc
 * Return: 1 if passed in else, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;

		for (a = 1; a < 3; a++)
			b *= atoi(argv[a]);

		printf("%d\n", b);
	}

	return (0);
}
