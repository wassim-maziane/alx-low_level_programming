#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to head
 * @index: index of node
 *
 * Return: 1 (success), -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node = *head;
	unsigned int i;

	if (!(node))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!(node->next))
			return (-1);
		node = node->next;
	}
	tmp = node->next;
	node->next = tmp->next;
	free(tmp);
	return (1);
}
