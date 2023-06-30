#include "main.h"
/**
 * print_number - print  numbers.
 * @n: number to be  tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int a, b, num, num1, rais;
	unsigned int stat, numchar, digits;

	num = 0;
	if (n < 0)
	{
		_putchar('-');
		stat = -n;
	}
	else
	{
		stat = n;
	}

	digits = stat;

	while (digits >= 10)
	{
		digits = digits / 10;
		num++;
	}
	num1 = num + 1;
	rais = 1;
	a = 1;

	while (a < num1)
	{
		rais = rais * 10;
		a++;
	}
	b = rais;
	while (b >= 1)
	{
		numchar = (stat / b) % 10;
		_putchar(numchar + '0');
		b = b / 10;
	}
}
