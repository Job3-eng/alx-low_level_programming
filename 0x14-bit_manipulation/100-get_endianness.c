#include "main.h"

/**
 * get_endianness - checking  machine
 * Return: 0 huge 1 small
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

