#include "lists.h"

/**
 * insert_nodeint_at_index - inserting  node
 * @head: pointer of first node
 * @idx: index 
 * @n: data
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *news;
	listint_t *tempo = *head;

	news = malloc(sizeof(listint_t));
	if (!news || !head)
		return (NULL);

	news->n = n;
	news->next = NULL;

	if (idx == 0)
	{
		news->next = *head;
		*head = news;
		return (news);
	}

	for (a = 0; tempo && a < idx; a++)
	{
		if (a == idx - 1)
		{
			news->next = tempo->next;
			tempo->next = news;
			return (news);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}

