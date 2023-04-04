#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list of integers
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
