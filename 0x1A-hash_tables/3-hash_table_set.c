#include "hash_tables.h"
/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * 
 * Return: 1 (success), 0 (node)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	char *value_copy;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	index =	key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];
	while(current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value_copy);
			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}
	node->key = malloc(sizeof(key));
	if (node->key == NULL)
		return (0);
	node->value = malloc(sizeof(value));
	if (node->value == NULL)
		return (0);
	node->next = NULL;
	strcpy(node->value, value_copy);
	strcpy(node->key, key);
	current = ht->array[index];
	if (current == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{ 
		node->next = current;
		ht->array[index] = node;
		return (1);
	}
}
