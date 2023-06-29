#include "main.h"
/**
 * puts_half- function to print half of a string
 * @str: the string to be manupulated
 * Return: nothing
 */
void puts_half(char *str)
{
	int i_input, nusu;

	i_input = 0;
	while (str[i_input] != '\0')
		i_input++;

	nusu = i_input / 2;

	if (i_input % 2 == 1)
		nusu++;

	while (nusu < i_input)
	{
		_putchar(str[nusu]);
		nusu++;
	}
	_putchar('\n');
}
