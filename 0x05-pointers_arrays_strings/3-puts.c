#include "main.h"
/**
 * _puts - a function that prints a string.
 *
 * @str: string input
 *
 */

void _puts(char *str)
{
	int i_input;

	for (i_input = 0; str[i_input] != '\0'; i_input++)
	{
		_putchar(str[i_input]);
	}
	_putchar('\n');
}
