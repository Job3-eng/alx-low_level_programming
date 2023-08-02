#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counting the nodes
 * @head: A pointer.
 *
 * Return: 0 successfull Otherwise
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise_s, *hare_s;
	size_t node_s = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise_s = head->next;
	hare_s = (head->next)->next;

	while (hare_s)
	{
		if (tortoise_s == hare_s)
		{
			tortoise_s = head;
			while (tortoise_s != hare_s)
			{
				node_s++;
				tortoise_s = tortoise_s->next;
				hare_s = hare_s->next;
			}

			tortoise_s = tortoise_s->next;
			while (tortoise_s != hare_s)
			{
				node_s++;
				tortoise_s = tortoise_s->next;
			}

			return (node_s);
		}

		tortoise_s = tortoise_s->next;
		hare_s = (hare_s->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - doing  Printing safely.
 * @head: A pointer head.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_s, index1 = 0;

	node_s = looped_listint_len(head);

	if (node_s == 0)
	{
		for (; head != NULL; node_s++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index1 = 0; index1 < node_s; index1++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_s);
}
