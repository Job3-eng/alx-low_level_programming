#include "main.h"

/**
 * flip_bits - countng bits to be  changed
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, counts = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			counts++;
	}

	return (counts);
}
