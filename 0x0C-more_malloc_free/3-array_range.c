#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - createing an array with min and max numbers
 * @min: The lower array
 * @max: The upper an array
 * Return: Pointer of array
 */
int *array_range(int min, int max)
{
	int *p =  NULL;
	int c, a;

	if (min > max)
		return (NULL);

	c = (max - min) + 1;

	p = malloc(sizeof(int) * c);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < c; a++, min++)
		p[a] = min;

	return (p);
}
