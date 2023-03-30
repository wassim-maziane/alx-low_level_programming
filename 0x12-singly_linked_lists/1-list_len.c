#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - returns size of linked list
 * @h: pointer to header node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	do {
		h = h->next;
		i++;
	} while (h != NULL);
	return (i);
}
