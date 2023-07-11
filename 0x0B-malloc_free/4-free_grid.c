#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - main entry
 * @grid: grid
 * @height: height of dimension
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

