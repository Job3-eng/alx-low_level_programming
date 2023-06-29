#include "main.h"
/**
  * reverse_array - Reversing an array
  * @a: array of integers
  * @n: elements to swap
  *
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
	int *x, y, swap, z;

	x = a;

	for (y = 1; y < n; y++)
	{
		x++;
	}

	for (z = 0; z < i / 2; z++)
	{
		swap = a[z];
		a[z] = *x;
		*x = swap;
		x--;
	}
}
