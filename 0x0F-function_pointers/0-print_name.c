#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -function for printsing names
 * @name: string
 * @f: pointer of the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
