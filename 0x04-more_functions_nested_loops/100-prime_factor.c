#include <stdio.h>
#include <math.h>
/**
*main- printing LPF
*Return: returns 0
*/
int main(void)
{
	int f;
	long n = 612852475143;

	for (f = (int) sqrt(n); f > 2; f++)
	{
		if (n % f == 0)
		{
			printf("%d\n", f);
			break;
		}
	}

	return (0);
}
