#include<stdio.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a == 101 || a == 113)
		{
			continue;
			a++;
		}
		putchar(a);
		a++;
	}
	return (0);
}
