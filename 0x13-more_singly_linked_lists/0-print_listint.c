#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints a linked list
 * @h: head of linked list
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int i = 0;

	if (!(h))
		return (0);
	do {
		i++;
		printf("%d\n", h->n);
		h = h->next;
	} while (h);
	return (i);
	return
}
