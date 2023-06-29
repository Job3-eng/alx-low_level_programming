#include "main.h"
/**
 * _strlen - returning the length of a string
 *
 * @s: input string
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int i_input;

	for (i_input = 0; s[i_input] != '\0' ; i_input++)
		;
	return (i_input);
}
