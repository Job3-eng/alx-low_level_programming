#include "main.h"
/**
 * cap_string - capitalizing  words in a string.
 *
 * @entry: input string
 *
 * Return: capitalized
 */
char *cap_string(char *entry)
{
	int convert, i_input, c;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	convert = 32;

	for (i_input = 0; entry[i_input] != '\0'; i_input++)
	{
		if (entry[i_input] >= 'i_input' && entry[i_input] <= 'z')
		{
			entry[i_input] =  entry[i_input] - convert;
		}
		convert = 0;
		for (c = 0; chars[c] != '\0'; c++)
		{
			if (chars[c] == entry[i_input])
			{
				convert = 32;
				break;
			}
		}
	}
	return (entry);
}
