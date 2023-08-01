#include "lists.h"

/**
 * listint_len - returning total number of elements
 * @h: linked list for  traversing
 *
 * Return: total nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number  = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

