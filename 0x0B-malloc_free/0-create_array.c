#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array- hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}
