#include "lists.h"

/**
 * reverse_listint - Reversing a list.
 * @head: A pointer to head of the address.
 *
 * Return: first node pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aheader, *behind_p;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind_p = NULL;

	while ((*head)->next != NULL)
	{
		aheader = (*head)->next;
		(*head)->next = behind_p;
		behind_p = *head;
		*head = aheader;
	}

	(*head)->next = behind_p;

	return (*head);
}
