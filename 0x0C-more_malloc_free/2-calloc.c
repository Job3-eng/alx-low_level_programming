#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates elements into  an array
 * @nmemb: Number of elements
 * @size: Size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		p[a] = 0;

	return (p);
}
