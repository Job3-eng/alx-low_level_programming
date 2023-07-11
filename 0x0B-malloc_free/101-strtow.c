#include <stdlib.h>
#include "main.h"
/**
 * c_word - counting words in a string
 * @a: evaluated string
 * Return: number
 */
int c_word(char *a)
{
	int flag, g, h;

	flag = 0;
	h = 0;

	for (g = 0; a[g] != '\0'; g++)
	{
		if (a[g] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			h++;
		}
	}
	return (h);
}
/**
 * **strtow - splitng  string to words
 * @str: string
 *
 * Return: pointing an array
 */
char **strtow(char *str)
{
	char **mat, *temp;
	int a, b = 0, length = 0, words, c = 0, begin, stop;

	while (*(str + length))
		length++;
	words = c_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				stop = a;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (begin < stop)
					*temp++ = str[begin++];
				*temp = '\0';
				mat[b] = temp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = a;
	}

	mat[b] = NULL;

	return (mat);
}
