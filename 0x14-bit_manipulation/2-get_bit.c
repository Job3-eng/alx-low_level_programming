#include "main.h"

/**
 * get_bit - bit value to be returned
 * @n: searching this number
 * @index: index
 *
 * Return:  bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}
