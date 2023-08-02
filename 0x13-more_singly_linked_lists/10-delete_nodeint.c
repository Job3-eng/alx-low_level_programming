#include "lists.h"

/**
 * delete_nodeint_at_index - deleting a node
 * @head: pointer
 * @index: node to delete
 *
 * Return: 1 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *currents = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		a++;
	}


	currents = tempo->next;
	tempo->next = currents->next;
	free(currents);

	return (1);
}

