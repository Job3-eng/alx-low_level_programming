#include "lists.h"

/**
 * find_listint_loop - finding a  loop
 * @head: pointer to a list
 *
 * Return: start of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slows = head;
	listint_t *fasts = head;

	if (!head)
		return (NULL);

	while (slows && fasts && fasts->next)
	{
		fasts = fasts->next->next;
		slows = slows->next;
		if (fasts == slows)
		{
			slows = head;
			while (slows != fasts)
			{
				slows = slows->next;
				fasts = fasts->next;
			}
			return (fasts);
		}
	}

	return (NULL);
}

