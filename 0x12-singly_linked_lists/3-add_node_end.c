#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - addng a new node to the linked list
 * @head: double pointer
 * @str: string
 *
 * Return: address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_s;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_s = malloc(sizeof(list_t));
	if (!new_s)
		return (NULL);

	new_s->str = strdup(str);
	new_s->length = length;
	new_s->next = NULL;

	if (*head == NULL)
	{
		*head = new_s;
		return (new_s);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_s;

	return (new_s);
}

