#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - takes integer argumentsthen returns the sum
 * @argc: Number of arguments
 * @argv: Array of size argc
 * Return: 1 for non-integer 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, length, total;
	char *p;

	if (argc < 2)
		printf("0\n");
	else
	{
		total = 0;
		for (a = 1; a < argc; a++)
		{
			p = argv[a];
			length = strlen(p);

			for (b = 0; b < length; b++)
			{
				if (isdigit(*(p + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			total += atoi(argv[a]);
		}

	printf("%d\n", total);
	}
	return (0);
}
