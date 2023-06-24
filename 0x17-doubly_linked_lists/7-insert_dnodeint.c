#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to h
 * @idx: index of position
 * @n: content of node
 *
 * Return: address of new node or NULL (failure)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while ((tmp) && (i != idx))
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	if (tmp == NULL)
		return (add_dnodeint_end(h, n));
	node->prev = tmp->prev;
	node->next = tmp;
	tmp->prev->next = node;
	tmp->prev = node;
	return (node);
}
