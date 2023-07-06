#include "main.h"
/**
 * s_len - calculating the length of a string.
 * @s: string
 * Return: length.
 */
int s_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + s_len(s + 1));
	}
}
/**
 * palindrome - checking for a palindrome.
 * @s: string
 * @a: point of recursion
 * @length: length
 * Return: 1 otherwise 0.
 */
int palindrome(char *s, int a, int length)
{
	if (*(s + a) == *(s + length - 1 - a) && a == (length / 2))
	{
		return (1);
	}
	else if (*(s + a) != *(s + length - 1 - a))
	{
		return (0);
	}
	else
	{
		return (palindrome(s, a + 1, length));
	}
}
/**
 * is_palindrome - checking for a palindrome.
 * @s: string
 * Return: 1 otherwise 0.
 */
int is_palindrome(char *s)
{
	if (palindrome(s, 0, s_len(s)) == 1)
		return (1);
	else
		return (0);
}
