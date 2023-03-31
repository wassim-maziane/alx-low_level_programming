#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
