#include "main.h"
/**
 * _memcpy - copping memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;
	
	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

