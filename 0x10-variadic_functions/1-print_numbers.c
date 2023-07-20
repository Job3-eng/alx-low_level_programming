#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - printing numbers
 * @separator: string
 * @n: integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list myListing;

	va_start(myListing, n);

	for (count = 1; count <= n; count++)
	{
		printf("%i", va_arg(myListing, int));
		if (count < n && separator)
		{
			printf("%s", separator);
		}
		else
		{
			;
		}
	}
	printf("\n");
	va_end(myListing);
}
