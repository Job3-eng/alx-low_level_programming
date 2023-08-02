#include "lists.h"

/**
 * reverse_listint - r function reversing a list
 * @head: a pointer to first node
 *
 * Return: new list pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevs = NULL;
	listint_t *nexts = NULL;

	while (*head)
	{
		nexts = (*head)->nexts;
		(*head)->nexts = prevs;
		prevs = *head;
		*head = nexts;
	}

	*head = prevs;

	return (*head);
}

