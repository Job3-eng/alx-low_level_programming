#include <stdio.h>
#include <stdlib.h>

/**
* main - main entry
* @argc: arg count
* @argv: arg vector
*
* Return: 0 succesful
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
