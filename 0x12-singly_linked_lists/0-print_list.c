#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of h
 * @h: singly linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	do {
		(h->str ? printf("[%u] %s\n", h->len, h->str) : printf("[0] (nil)\n"));
		h = h->next;
		i++;
	} while (h != NULL);
	return (i);
}
