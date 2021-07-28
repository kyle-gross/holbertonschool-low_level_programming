#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; ht && i < ht->size; i++)
		{
			p = ht->array[i];
			while (p)
			{
				if (n == 1)
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
				p = p->next;
				n = 1;
			}
		}
		printf("}\n");
	}
}
