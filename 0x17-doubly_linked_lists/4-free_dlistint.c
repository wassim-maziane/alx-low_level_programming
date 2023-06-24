#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 *
 * @head: pointer of head
 *
 * Return: address of the new element
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
		return;
	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
