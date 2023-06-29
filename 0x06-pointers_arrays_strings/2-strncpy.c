#include "main.h"
/**
  * _strncpy - Coping a  string
  * @dest: destination string
  * @src:source string
  * @n:  limit
  *
  * Return: char value destination
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
