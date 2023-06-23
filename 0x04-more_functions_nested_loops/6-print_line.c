#include "main.h"

/**
  * print_line - Drawing a straight line according to the parameter
  * @n: giving the number of lines to be drawn
  * Return: not specified
  */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
