#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - main entry
 * @b: Value passed
 * Return: 0 (succcess)
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
