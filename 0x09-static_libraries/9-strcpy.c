#include "main.h"
/**
 * _strcpy - a function that copies a string
 * @dest: pointer to be  copied to
 * @src: pointer to be copied from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int m  = 0;
	int n = 0;
	
	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; n < m ; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
