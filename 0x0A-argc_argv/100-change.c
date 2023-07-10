#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * currencyInverter - all the calculations
 * @a: Passed in variable
 * Return: number of coins
 */
int currencyInverter(int a)
{
	int shillingi = 0;

	while (a != 0)
	{
		if (a % 10 == 9 || a % 10 == 7)
			a -= 2;
		else if (a % 25 == 0)
			a -= 25;
		else if (a % 10 == 0)
			a -= 10;
		else if (a % 5 == 0)
			a -= 5;
		else if (a % 2 == 0)
		{
			if (a % 10 == 6)
				a -= 1;
			else
				a -= 2;
		}
		else
			a -= 1;

		shillingi++;
	}

	return (shillingi);
}

/**
 * main - minimum coin count
 * @argc: Number of arguments
 * @argv: Array of size argc
 * Return: 0 else, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int b, shillingi;

	shillingi = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);

	if (b < 0)
		printf("0\n");
	else
	{
		shillingi = currencyInverter(a);

		printf("%d\n", shillingi);
	}

	return (0);
}
