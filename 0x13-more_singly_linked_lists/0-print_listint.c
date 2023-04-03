#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
size_t print_listint(const listint_t *h)
{
	long unsigned int i = 0;

	if (!(h))
		return (0);
	do {
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	while (h);
	return (i);
}
