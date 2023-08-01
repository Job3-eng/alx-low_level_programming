#include "lists.h"

/**
 * print_listint - printing elementsof  list
 * @h: linked list
 *
 * Return: total nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}

