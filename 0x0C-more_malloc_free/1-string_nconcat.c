#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: 1st string
 * @s2: 2nd String
 * @n: bytes
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (b <= n)
		n = b;

	p = malloc((a + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		p[c] = s1[c];

	for (c = 0; c < n; c++)
		p[c + a] = s2[c];

	p[c + a] = '\0';

	return (p);
}
