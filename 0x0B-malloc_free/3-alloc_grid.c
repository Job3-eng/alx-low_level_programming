#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid- main entry point
 * @width: 1st measure
 * @height: 2nd measure
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b;

	int *p = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int *)malloc(width * height * sizeof(int));

	for (a = 0; a < width * height; a++)
	{
	}

	return (p);
}
