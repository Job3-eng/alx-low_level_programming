#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counting number nodes
 * @head: pointer  check.
 *
 * Return: 0 succesfull  Otherwise.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise_s, *hare_s;
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
 * free_listint_safe - Freeing list safely
 * @h: A pointer
 *
 * Return: size of list
 *
 * Description: seting head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp_s;
	size_t node_ss, index1;

	node_ss = looped_listint_count(*h);

	if (node_ss == 0)
	{
		for (; h != NULL && *h != NULL; node_ss++)
		{
			tmp_s = (*h)->next;
			free(*h);
			*h = tmp_s;
		}
	}

	else
	{
		for (index1 = 0; index1 < node_ss; index1++)
		{
			tmp_s = (*h)->next;
			free(*h);
			*h = tmp_s;
		}

		*h = NULL;
	}

	h = NULL;

	return (node_ss);
}
