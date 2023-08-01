#include "lists.h"

/**
 * add_nodeint_end - adding a new node at the end oend
 * @head: pointer pointing to the first one
 * @n: data to the be  inserted
 *
 * Return: pointer returned
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nesw;
	listint_t *tempo = *head;

	nesw = malloc(sizeof(listint_t));
	if (!nesw)
		return (NULL);

	nesw->n = n;
	nesw->next = NULL;

	if (*head == NULL)
	{
		*head = nesw;
		return (nesw);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = nesw;

	return (nesw);
}

