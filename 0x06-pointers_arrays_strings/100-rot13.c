#include "main.h"
/**
 * rot13 - encoding a string using rot13
 *
 * @src: input string
 *
 * Return:  rot13
 *
 */

char *rot13(char *src)
{
	int i_input, c;

	char sub[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mult[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i_input = 0; src[i_input] != '\0'; ++i_input)
	{
		for (c = 0; sub[c] != '\0' ; c++)
		{
			if (src[i_input] == sub[c])
			{
				src[i_input] = mult[c];
				break;
			}
		}
	}
	src[i_input] = '\0';
	return (src);
}
