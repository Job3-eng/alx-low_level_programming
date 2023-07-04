#include "main.h"
/**
 * _memset - filling  memory.
 * @s: source string
 * @b: the contant
 * @n: lenght
 * Return: string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
