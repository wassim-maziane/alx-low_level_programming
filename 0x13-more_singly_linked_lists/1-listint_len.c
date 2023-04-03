#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - returns number of elements in a linked list
 * @h: head of linked list
 *
 * Return: lenght of linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
