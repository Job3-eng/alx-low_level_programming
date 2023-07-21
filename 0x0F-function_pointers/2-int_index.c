#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searching for an integer
 * @array: array to be passed
 * @size: the number of elements
 * @cmp: pointer for comparing values
 *
 * Return: index
 * return 0. Otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if ((*cmp) (array[a]))
		{
			return (a);
		}
	}
	return (-1);
}
