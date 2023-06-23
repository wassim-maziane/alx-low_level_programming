#include "lists.h"
/**
 * dlistint_len - returns length of doubly linked list
 *
 * @h: pointer to head
 * Return: length of doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
