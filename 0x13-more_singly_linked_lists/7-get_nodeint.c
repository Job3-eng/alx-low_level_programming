#include "lists.h"

/**
 * get_nodeint_at_index - returning the node
 * @head: first node
 * @index: node to be  returned
 *
 * Return: pointer of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tempo = head;

	while (tempo && a < index)
	{
		tempo = tempo->next;
		a++;
	}

	return (tempo ? tempo : NULL);
}

