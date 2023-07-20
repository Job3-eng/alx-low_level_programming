#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - printing everything
* @format: arguments passed
*/
void print_all(const char * const format, ...)
{
	va_list argument;
	char *str;
	int a = 0;
	char c;
	float b;

	va_start(argument, format);

	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				c = va_arg(argument, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(argument, int));
				break;
			case 'f':
				printf("%f", va_arg(argument, double));
				break;
			case 's':
				str = va_arg(argument, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[a + 1])
			printf(", ");
		a++;
	}
	printf("\n");

	va_end(argument);
}
