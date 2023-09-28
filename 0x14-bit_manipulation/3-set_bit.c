#include "main.h"

/**
 * set_bit - seting  bitto index
 * @n: pointer 
 * @index: index set 1
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
