#include "main.h"
/**
  * _abs - Computes the absolute value.
  * @n: input number as an integer.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
