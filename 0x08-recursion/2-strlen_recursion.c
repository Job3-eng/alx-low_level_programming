#include "main.h"
/**
 * _strlen_recursion - printing length of astring.
 * @s: string
 * Return: string.
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length = 1 + _strlen_recursion(s + 1);
		return (length);
	}
}
