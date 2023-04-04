#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @idx: index
 * @n: value of node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;
	listint_t *node = *head;

	
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{	
		if (!node)
			return (NULL);
		node = node->next;
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
