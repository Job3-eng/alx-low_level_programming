#include <stdlib.h>
#include "lists.h"
/**
 * list_len -main function to return the number of elements
 * @h: pointer
 *
 * Return: elementsreturned in a
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
