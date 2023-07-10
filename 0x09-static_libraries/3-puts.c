#include "main.h"
#include <stdio.h>
/**
 * _puts-main Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int a = 0;
	
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

