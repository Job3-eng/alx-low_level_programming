#include "main.h"
/**
 * _strpbrk - main entry point
 * @s: input value
 * @accept: input value character
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	
	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
