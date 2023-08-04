#include "main.h"

/**
 * clear_bit - setting bit value to 0
 * @n: pointer of the number
 * @index: bit index
 *
 * Return: 1 success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

