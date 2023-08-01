#include "lists.h"

/**
 * add_nodeint - adding  a neat the start of the node 
 * @head: pointer
 * @n: data to be  inserted
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *news;

	news = malloc(sizeof(listint_t));
	if (!news)
		return (NULL);

	news->n = n;
	news->next = *head;
	*head = news;

	return (news);
}

