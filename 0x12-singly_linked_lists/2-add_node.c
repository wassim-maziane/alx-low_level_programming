#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the end of a lsit
 * @head: adds a node to a list
 * @str: string on the nod
 *
 * Return: address of new element, null otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	while (str[len])
		len++;
	new->len = len;
	new->str = strdup(str);
	if (!(*head))
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (*head);
}


