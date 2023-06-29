#include "main.h"
/**
 * _strcpy- function to copy characters
 * @dest: destination
 * @src: source of the data
 * Return: returning the copy
 */
char *_strcpy(char *dest, char *src)
{
	char *begin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (begin);
}
