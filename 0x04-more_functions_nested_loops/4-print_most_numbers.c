#include "main.h"
/**
  * print_most_numbers - Printing numbers from 0 to 9
  *
  * Description:  excluding 2 and 4 and continues with the iteration
  *
  * Return: numbers from 0 to 9
  */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 && a == 4)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
