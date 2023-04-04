#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of linked list
 *
 * Return: returns the head node's data 
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!(*head))
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
