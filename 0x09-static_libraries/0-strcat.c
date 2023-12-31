#include "main.h"
/**
 * _strcat - concatenating strings
 * @dest: input
 * @src: input
 * Return: nothing          
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;
	a = 0;
	
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	
	while (src[b] != '\0')
	{
		dest[b] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	
	return (dest);
}
