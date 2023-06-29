#include "main.h"

/**
  * rev_string - Reversing a string
  * @s: string to be modified
  * Return: void
  */
void rev_string(char *s)
{
	int a, b, c;
	char *f, swap;

	f = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		f++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		swap = s[a];
		s[a] = *f;
		*f = swap;
		f--;
	}
}

