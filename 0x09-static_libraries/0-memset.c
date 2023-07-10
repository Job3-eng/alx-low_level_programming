#include "main.h"
/**
 * _memset - filling memory with a value
 * @s: starting address
 * @b: the value
 * @n: number of bytes
 * Return: array of new  value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;
	
	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

