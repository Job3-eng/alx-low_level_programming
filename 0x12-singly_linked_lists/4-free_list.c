#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to  free list
 * @head:  the list_t
 */
void free_list(list_t *head)
{
	list_t *temp_s;

	while (head)
	{
		temp_s = head->next;
		free(head->str);
		free(head);
		head = temp_s;
	}
}
