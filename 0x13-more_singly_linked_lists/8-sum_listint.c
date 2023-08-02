#include "lists.h"

/**
 * sum_listint - calculateing sum of data
 * @head: first node
 *
 * Return: sumtotal
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		total += tempo->n;
		tempo = tempo->next;
	}

	return (total);
}

