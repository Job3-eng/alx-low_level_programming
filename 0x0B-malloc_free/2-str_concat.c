#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat- concatinates ywo strings
 * @s1: string 1
 * @s2: string 2
 * Return: String
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c;

	char *n_Str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	n_Str = (char *)malloc((a + b) * sizeof(char));

	if (n_Str == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		n_Str[c] = s1[c];

	for (c = 0; s2[c] != '\0'; c++)
		n_Str[c + a] = s2[c];

	return (n_Str);
}
