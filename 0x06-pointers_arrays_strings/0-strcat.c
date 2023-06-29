#include "main.h"
/**
  * _strcat - Concatenating two strings
  * @dest: destination string
  * @src:  source string
  *
  * Return:  string destination
  */
char *_strcat(char *dest, char *src)
{
	int d_length = 0, a;

	while (dest[d_length])
	{
		d_length++;
	}

	for (a = 0; src[a] != 0; a++)
	{
		dest[d_length] = src[a];
		d_length++;
	}

	dest[d_length] = '\0';
	return (dest);
}
