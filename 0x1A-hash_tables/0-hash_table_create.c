#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: On success pointer to hash_table_t.
 * NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int k;
	hash_table_t *new_hasht = NULL;

	if (size > 0)
	{
		new_hasht = malloc(sizeof(hash_table_t));
		if (new_hasht)
		{
			new_hasht->size = size;
			new_hasht->array =  malloc(size * sizeof(hash_node_t *));
			if (!new_hasht->array)
			{
				for (i = 0; i < size; i++)
					new_hasht->array[i] = NULL;
				free(new_hasht);
			}
		}
	}
	return (new_hasht);
}
