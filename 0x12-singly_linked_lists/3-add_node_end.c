#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adding a new node
 * @head: double pointer
 * @str: string
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int length;
	list_t *new_s, *last_s;

	new_s = malloc(sizeof(list_t));
	if (new_s == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_s);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_s->str = dup;
	new_s->length = length;
	new_s->next = NULL;

	if (*head == NULL)
		*head = new_s;

	else
	{
		last_s = *head;
		while (last_s->next != NULL)
			last_s = last_s->next;
		last_s->next = new_s;
	}

	return (*head);
}
