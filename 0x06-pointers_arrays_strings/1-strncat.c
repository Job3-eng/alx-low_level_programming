#include "main.h"
/**
  * _strncat - Concatenating two strings
  * @dest: destination string
  * @src: source string
  * @n: concatenation limit
  *
  * Return: A string destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int d_length = 0, a = 0;

	while (dest[d_length])
	{
		d_length++;
	}

	while (a < n && src[a])
	{
		dest[d_length] = src[a];
		d_length++;
		a++;
	}

	dest[d_length + n + 1] = '\0';

	return (dest);
}
