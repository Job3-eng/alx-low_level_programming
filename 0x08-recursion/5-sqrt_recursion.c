#include "main.h"
/**
 * _sqrt_recursion - squareroot of a number.
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt(n, 1));
	}
}
/**
 * sqrt - manualy sqrt.
 * @n: number
 * @a: number to be multiplied.
 *
 * Return: sqrt.
 */
int sqrt(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt(n, a + 1));
	}
}
