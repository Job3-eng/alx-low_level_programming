#include "main.h"
/**
 * _atoi - converting string to integer.
 *
 * @s: string
 *
 * Return: integer value.
 */
int _atoi(char *s)
{
	int c = 1, m = 0;
	unsigned int result = 0;
	
	while (!(s[m] <= '9' && s[m] >= '0') && s[m] != '\0')
	{
		if (s[m] == '-')
			c *= -1;
		m++;
	}
	while (s[m] <= '9' && (s[m] >= '0' && s[m] != '\0'))
	{
		result = (result * 10) + (s[m] - '0');
		m++;
	}
	result *= c;
	return (result);
}

