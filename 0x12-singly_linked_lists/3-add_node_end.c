#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *new_node(const char *str);
/**
 * add_node_end - addnew node.
 * @head: pointer of  list_t
 * @str: string
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_s;

	if (!(*head))
	{
		*head = new_node(str);
		return (*head);
	}

	if (!(*head)->next)
	{
		new_s = new_node(str);
		new_s->next = (*head)->next;
		(*head)->next = new_s;
	}
	else
		add_node_end(&(*head)->next, str);

	return (*head);
}

/**
 * new_node - create a new string.
 * @str: string
 *
 * Return: pointer
 */
list_t *new_node(const char *str)
{
	list_t *new_s;
	size_t length;

	new_s = malloc(sizeof(list_t));
	if (!new_s)
		return (NULL);
	length = 0;
	while (str[length])
		length++;

	new_s->str = strdup(str);
	new_s->length = length;
	new_s->next = NULL;
	return (new_s);
}

