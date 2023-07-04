#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - adding two diagonals.
 * @a: matrix
 * @size: siz of matrix
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int a, b, t_diag1 = 0, t_diag2 = 0, step1, step2;

	for (a = 0; a <= (size - 1); a++)
	{
		step1 =  (size + 1) * a;
		t_diag1 = t_diag1 + *(a + step1);
	}

	for (b = 1; b <= size; b++)
	{
		step2 = (size - 1) * b;
		t_diag2 = t_diag2 + *(a + step2);
	}
	printf("%d, %d\n", t_diag1, t_diag2);
}
