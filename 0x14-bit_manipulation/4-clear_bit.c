#include "main.h"

/**
 * clear_bit - setting value of the bit
 * @n: pointer
 * @index: index
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

