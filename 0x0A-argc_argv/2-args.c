#include <stdio.h>
#include "main.h"
/**
 * main - Printing arguments passed
 * @argc: Number of arguments
 * @argv: Array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
