#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - Computes the absolute value of an integer.
  * @n: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
                        printf("%d\n", n);
		}
	}
}
