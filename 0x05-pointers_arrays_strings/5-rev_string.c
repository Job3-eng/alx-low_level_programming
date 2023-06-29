#include "main.h"
/**
 * rev_string- function to reverse a string
 * @s: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, length;

	char *start, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}

	length = i + 1;
	start = s;

	for (i = 0; i < length / 2; i++)
	{
		char a;

		a = *end;
		*end = *start;
		*start = a;
		start++;
		end--;
	}
	end[length + 1] = '\0';
}
