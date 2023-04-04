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
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
