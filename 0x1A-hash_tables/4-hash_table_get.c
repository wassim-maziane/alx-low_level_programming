#include "hash_tables.h"
/**
 * hash_table_get - retrives value of key
 * @ht: hash_table
 * @key: key whose value is to be retrieved
 *
 * Return: value associated with key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index =	key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
