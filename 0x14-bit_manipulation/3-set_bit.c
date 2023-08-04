#include "main.h"

/**
 * set_bit - setting   bit to 1
 * @n: pointer
 * @index: bit index
 *
 * Return: 1 success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

