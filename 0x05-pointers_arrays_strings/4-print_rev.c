#include "main.h"

/**
 * print_rev - a reverseof  string
 *
 * @s:  input string
 */
void print_rev(char *s)
{
	int i_input;

	for (i_input = 0; s[i_input] != '\0'; i_input++)
		;
	for (i_input = i_input - 1; s[i_input] != '\0'; i_input--)
	{
		_putchar(s[i_input]);
	}
	_putchar('\n');
}
