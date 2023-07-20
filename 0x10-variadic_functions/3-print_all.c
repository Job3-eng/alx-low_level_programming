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
	char *str;
	const char arguments[] = "cifs";
	va_list myList;

	va_start(myList, format);
	while (format && format[count])
	{
		b = 0;
		while (arguments[b])
		{
			if (format[count] == arguments[b] && a)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(myList, int)), a = 1;
			break;
		case 'i':
			printf("%d", va_arg(myList, int)), a = 1;
			break;
		case 'f':
			printf("%f", va_arg(myList, double)), a = 1;
			break;
		case 's':
			str = va_arg(myList, char *), a = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} count++;
	}
	printf("\n"), va_end(myList);
}
