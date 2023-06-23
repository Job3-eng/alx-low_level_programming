#include "main.h"
/**
  * _isdigit - Checking if a character is a digit
  * @c: Checking c in the function
  * Return: 1 if the number lies between 0-9  or 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
