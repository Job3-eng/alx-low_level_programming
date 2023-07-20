#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - printing everything
* @format: arguments passed
*/

void print_all(const char * const format, ...)
{
	unsigned int count = 0, b, a = 0;
	char *c;
	const char argument[] = "cifs";
	va_list myListng;

	va_start(myListing, format);
	while (format && format[count])
	{
		b = 0;
		while (argument[b])
		{
			if (format[count] == argument[b] && a)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(myListing, int)), a = 1;
			break;
		case 'i':
			printf("%d", va_arg(myListing, int)), a = 1;
			break;
		case 'f':
			printf("%f", va_arg(myListing, double)), a = 1;
			break;
		case 's':
			c = va_arg(myListing, char *), a = 1;
			if (!c)
			{
				printf("(nil)");
				break;
			}
			printf("%s", c);
			break;
		} count++;
	}
	printf("\n"), va_end(myListing);
}
