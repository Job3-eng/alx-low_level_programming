#include "main.h"
/**
 * _strlen - returning length of string
 * @s: string
 * Return: total length
 */
int _strlen(char *s)
{
	int longest = 0;
	
	while (*s != '\0')
	{
		longest++;
		s++;
	}
	return (longest);
}

