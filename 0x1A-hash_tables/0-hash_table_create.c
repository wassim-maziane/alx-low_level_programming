#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 *
 * Return: pointer to newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
		return (NULL);
	return (hash_table);
}
