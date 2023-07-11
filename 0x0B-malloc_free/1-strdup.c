#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup- main entry
 * @str: the passsed string
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	int a = 0, b, c = 0;

	char *n_Str = NULL;

	while (str[c] != '\0')
	{
		a++;
		c++;
	}
	n_Str = malloc(sizeof(char) * (a + 1));

	if (str == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		n_Str[b] = str[b];

	return (n_Str);
}
