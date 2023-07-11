#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array- hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
  unsigned int a;

  if (size == 0)
      return (NULL);

  char *s = (char*)malloc(size * sizeof(char));

  	a = 0;
       
	while (a < size)
	  {
		  s[a] = c;
		  a++;
	  }
  return (s);
}
