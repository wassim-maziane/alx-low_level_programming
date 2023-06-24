#include "lists.h"
/**
 * sum_dlistint - returns sum of elements of a dlist
 * @head: head of list
 *
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
