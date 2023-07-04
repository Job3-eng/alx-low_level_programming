#include "main.h"
#include <stdio.h>
/**
 * _strstr - prints characters of s1 in s2.
 * @haystack: source
 * @needle: searching
 * Return: string.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && orpotune(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * orpotune - define b is inside a.
 * @i: source
 * @j: string to be searched
 *
 * Return: 1 otherwise 0.
 */
int orpotune(char *i, char *j)
{
	while (*j && *j == *i)
	{
		j++;
		i++;
	}

	if (*j == '\0')
		return (1);
	else
		return (0);
}
