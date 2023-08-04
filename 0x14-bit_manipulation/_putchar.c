#include "main.h"
#include <unistd.h>
/**
 * _putchar - writting the character to the starndard input and output
 * @c: character
 *
 * Return: 1 for  success
 * 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

