#include "main.h"
/**
 * is_prime_number- checking for prime number
 * @n: number
 * Return: prime number
 * int is_prime_number(int n)
 * {
 * return (checking_prime(n, 1));
 * }
 */
/**
 * checking_prime- checking if number is prime
 *
 * @n: number
 * @a: devisor
 * Return: prime number
 */
int checking_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (checking_prime(n, a + 1));
}
/**
 * is_prime_number- checking for prime number
 * @n: number
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (checking_prime(n, 1));
}
