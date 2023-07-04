#include "main.h"
/**
 * _strspn - prints consecutive characters.
 * @s: string 1
 * @accept: search string
 *
 * Return: string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (b = 0; *(s + b); b++)
	{
		for (a = 0; *(accept + a); a++)
		{
			if (*(s + b) == *(accept + a))
				break;
		}
	if (*(accept + a) == '\0')
		break;
	}
	return (b);
}
