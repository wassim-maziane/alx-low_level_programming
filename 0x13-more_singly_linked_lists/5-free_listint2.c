#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t **tmp2 = head;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*tmp2 = NULL;
}
