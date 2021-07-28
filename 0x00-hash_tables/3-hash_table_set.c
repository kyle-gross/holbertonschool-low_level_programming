#include "hash_tables.h"

/**
 * ht_newpair - creates the node
 * @key: key to assing
 * @value: value to assign
 * Return: new node
 */
hash_node_t *ht_newpair(const char *key, const char *value)
{
	hash_node_t *newpair;

	newpair = malloc(sizeof(hash_node_t));
	if (!newpair)
		return (NULL);

	newpair->key = strdup(key);
	if (!newpair->key)
		return (NULL);

	newpair->value = strdup(value);
	if (!newpair->value)
		return (NULL);

	newpair->next = NULL;

	return (newpair);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add a key/value to
 * @key: key to add
 * @value: value to add
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int bin = 0;
	hash_node_t *newpair = NULL;
	hash_node_t *next = NULL;
	hash_node_t *last = NULL;

	bin = key_index((const unsigned char *)key, ht->size);
	next = ht->array[bin];

	while (next != NULL && next->key != NULL && strcmp(key, next->key) > 0)
	{
		last = next;
		next = next->next;
	}

	if (next && next->key && strcmp(key, next->key) == 0)
	{
		free(next->value);
		next->value = strdup(value);
	}
	else
	{
		if (next == ht->array[bin])
		{
			newpair = ht_newpair(key, value);
			if (!newpair)
				return (0);
			if (next == ht->array[bin])
			{
				newpair->next = next;
				ht->array[bin] = newpair;
			}
			else if (next == NULL)
				last->next = newpair;
			else
			{
				newpair->next = next;
				last->next = newpair;
			}
		}
	}
	return (1);
}
