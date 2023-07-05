#include "main.h"
/**
 * factorial - factorial
 * @n: number
 * Return: factorial.
 */
int factorial(int n)
{
	int a;
	int fact;

	while (a < n)
	{
		if (a < 0)
		{
			return (-1);
		}

		fact = fact * a;
		a++;
	}
	return (fact);
}
