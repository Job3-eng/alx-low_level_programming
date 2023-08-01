#include "lists.h"

/**
 * free_listint - frees a memmory allocated in the list
 * @head: list being frreed
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}

