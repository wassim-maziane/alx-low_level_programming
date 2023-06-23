#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked linst
 * @h: pointer to head of linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
