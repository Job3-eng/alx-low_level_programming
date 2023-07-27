#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding a new node
 * @head: double pointer
 * @str: new string
 *
 * Return: the address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_s;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_s = malloc(sizeof(list_t));
	if (!new_s)
		return (NULL);

	new_s->str = strdup(str);
	new_s->length = length;
	new_s->next = (*head);
	(*head) = new_s;

	return (*head);
}

