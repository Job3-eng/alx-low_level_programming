#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *new_node(const char *str);
/**
 * add_node_end - adding   new node.
 * @head: pointer
 * @str: string
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (!(*head))
	{
		*head = new_node(str);
		return (*head);
	}

	if (!(*head)->next)
	{
		new = new_node(str);
		new->next = (*head)->next;
		(*head)->next = new;
	}
	else
		add_node_end(&(*head)->next, str);

	return (*head);
}

/**
 * new_node - creating  new node.
 * @str: string
 *
 * Return: pointer
 */
list_t *new_node(const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	len = 0;
	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	return (new);
}

