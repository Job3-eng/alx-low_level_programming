#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returnsing the sum
 * @n: integers passed
 *
 * Return: sum else for  n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count, add = 0;
	va_list vaListing;

	va_start(vaListing, n);

	for (count = 0; count < n; count++)
		add += va_arg(vaListing, int);

	va_end(vaListing);
	return (add);
}
