#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point of the function
 * @argc: argumentto count
 * @argv: argument for vector
 *
 * Return: 0 succesfull
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') &&  (argv[2][0] != '-')
		&& (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
			printf("%d\n", a);
	return (0);
}
