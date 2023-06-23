#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to pointer of head
 * @n: address of the new element
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (tmp == NULL)
	{
		*head = node;
		return (node);
	}
	while ((tmp)->next)
		tmp = (tmp)->next;
	(tmp)->next = node;
	node->prev = tmp;
	return (node);
}
