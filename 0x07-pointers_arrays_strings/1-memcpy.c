#include "main.h"
/**
 * _memcpy - fills memory
 * @dest: source string
 * @src: filling string
 * @n: lenght
 * Return: string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
