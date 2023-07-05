#include "main.h"
/**
 * _print_rev_recursion - prints a reverse of  string.
 * @s: string
 * Return: string
 */
void _print_rev_recursion(char *s)
{
	if (*s.size() == 0)
	{
		return;
	}
	_print_rev_recursion(*s.substr(1));
	_putchar(*s);
}
