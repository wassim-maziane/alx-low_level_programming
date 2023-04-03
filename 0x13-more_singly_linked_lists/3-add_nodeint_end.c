#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/** add_node_int_end - adds a new node at the end of a listint_t list
 * @head: pointer to head of list;
 * @n: integer of node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (
	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	
