#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
listint_t *create_node(const int n);
/** add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head of list;
 * @n: integer of node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (!(*head))
	{
		new = create_node(n);
		*head = new;
		return (*head);
	}
	if (!(*head)->next)
	{
		new = create_node(n);
		(*head)->next = new; 
	}
	else
		add_nodeint_end(&(*head)->next, n);
	return (new);
}
/**
 * create_node - creates node
 * @n: integer of node
 *
 * Return: pointer of node
 */
listint_t *create_node(const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	new->n = n;
	return (new);
}	
		 
