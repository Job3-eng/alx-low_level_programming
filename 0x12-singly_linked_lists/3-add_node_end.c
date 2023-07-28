#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adding   new node
 * @head: pointer
 * @str: string
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_s;
	list_t *temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;
	new_s = malloc(sizeof(list_t));

	if (!new_s)
		return (NULL);

	new_s->str = strdup(str);
	new_s->len = len;
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

