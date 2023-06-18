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
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
