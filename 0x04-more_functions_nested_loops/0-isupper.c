#include "main.h"
/**
  * _isupper - checking for uppercase letter
  * @c: The number to be checked
  * Return: 1 for uppercase letter or 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	return (0);
}
