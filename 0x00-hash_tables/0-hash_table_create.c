#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to new hash table, or NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_table->array = NULL;

	hash_table->size = size;

	return (hash_table);
}
