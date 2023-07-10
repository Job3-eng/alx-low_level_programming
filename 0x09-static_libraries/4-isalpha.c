#include "main.h"
/**
 * _isalpha - checking for alphabetic letters
 * @c: the character
 * Return: 1 if a letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
