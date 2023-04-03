#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds node at the beginning of a linked list
 * @head: head of linked list
 * @n: element to be added
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	new->n = n;
	if (!(*head))
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (*head);
}
