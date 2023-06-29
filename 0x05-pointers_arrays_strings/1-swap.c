#include "main.h"
/**
  * swap_int - Swaping the values of a and b
  *
  * @a: the first integer
  * @b: the second integer
  *
  * Return: void(nothing)
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
