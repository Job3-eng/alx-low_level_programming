#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - printing strings using this function
 * @separator: string
 * @n: strings passed in function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *a;
	va_list myListing;

	va_start(myListing, n);

	for (count = 1; count <= n; count++)
	{
		a = va_arg(myListing, char*);

		if (a)
		{
			printf("%s", a);
		}
		else
		{
			printf("(nil)");
		}
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
