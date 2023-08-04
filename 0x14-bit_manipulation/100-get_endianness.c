#include "main.h"

/**
 * get_endianness - checking the size of the machine
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}

