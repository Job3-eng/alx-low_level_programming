#include "main.h"
/**
 * _atoi-printing strings to integers
 * @s: the string to be converted
 * Return: the numbers
 */
int _atoi(char *s)
{
	int b;
	unsigned int number;
	char *cons;

	cons = s;
	number = 0;
	b = 1;
	while (*cons != '\0' && (*cons < '0' || *cons > '9'))
	{
		if (*cons == '-')
			b *= -1;
		cons++;
	}
	if (*cons != '\0')
	{
		do {
			number = number * 10 + (*cons - '0');
			cons++;
		} while (*cons >= '0' && *cons <= '9');
	}
	return (number * b);
}
