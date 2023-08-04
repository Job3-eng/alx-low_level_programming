#include "main.h"

/**
 * flip_bits - counting numbers to change
 *
 * @n: 1st number
 * @m: 2nd  number
 *
 * Return: number  to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, counting = 0;
	unsigned long int current_n;
	unsigned long int exclusive_n  = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current_n = exclusive_n >> a;
		if (current_n & 1)
			counting++;
	}

	return (counting);
}

