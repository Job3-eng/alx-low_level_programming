#include "main.h"
/**
 * is_prime_number- prime number calculation
 * @n: number
 * Return: if prime return 1 otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (i_prime(n, 2));
	}
}
/**
 * i_prime- calculate prime number
 * @n: number
 * @a: devisor
 * Return: 1 if prime 0 otherwise
 */
int i_prime(int n, int a)
{
	if (n % a == 0)
	{
		return (0);
	}
	else if (a == (n - 1) && n % a != 0)
	{
		return (1);
	}
	else
	{
		return (i_prime(n, a + 1));
	}
}
