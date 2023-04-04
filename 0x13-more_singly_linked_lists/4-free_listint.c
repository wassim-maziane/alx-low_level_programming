#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list of ints
 * @head: pointer to head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);
	free(head);
	return;
}
