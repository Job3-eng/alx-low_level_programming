#include "lists.h"

/**
 * pop_listint - deleteing the node
 * @head: pointer
 *
 * Return: data to be  deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (number);
}

