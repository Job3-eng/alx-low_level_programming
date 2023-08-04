#include "main.h"

/**
 * print_binary - printing binary of a decimal
 * @n: numbe
 */
void print_binary(unsigned long int n)
{
	int a, counting = 0;
	unsigned long int current_n;

	for (a = 63; a >= 0; a--)
	{
		current_n = n >> a;

		if (current_n & 1)
		{
			_putchar('1');
			counting++;
		}
		else if (counting)
			_putchar('0');
	}
	if (!counting)
		_putchar('0');
}

