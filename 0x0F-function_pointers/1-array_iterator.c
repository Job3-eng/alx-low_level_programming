#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executeing a functionn
 * @size: array size
 * @action: pointer
 * @array: array to be passed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			(action) (array[a]);
		}
	}
}
