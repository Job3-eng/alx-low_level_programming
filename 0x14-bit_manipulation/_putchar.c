#include "main.h"
#include <unistd.h>
/**
 * _putchar - writting  char to standard input and out
 * @c: char
 *
 * Return: success 1 ,-1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
