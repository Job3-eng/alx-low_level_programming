#include "main.h"
/**
  * string_toupper - Changeing lowercase to uppercase
  * @p: string to be modified
  *
  * Return: char 
  */
char *string_toupper(char *p)
{
	int m = 0;

	while (p[m])
	{
		if (p[m] >= 97 && p[m] <= 122)
		{
			p[m] -= 32;
		}

		m++;
	}

	return (p);
}
