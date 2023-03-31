#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_node - create a new node around str
 * @str: string
 *
 * Return: pointer to a list_t
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
/**
 * add_node_end - adds node to end of list
 * @head: pointer to pointer of a list_t
 * @str: string to copy
 *
 * Return: pointer to a list_t
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
		(*head)->next = new;
	}
	else
		add_node_end(&(*head)->next, str);
	return (*head);
}
