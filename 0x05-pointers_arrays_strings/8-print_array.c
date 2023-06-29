#include "main.h"
#include <stdio.h>
/**
 * print_array- main entry
 * @a: the integers
 * @n: another integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i_input;

	for (i_input = 0; i_input < n; i_input++)
	{
		printf("%d", a[i_input]);
		if (i_input != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
