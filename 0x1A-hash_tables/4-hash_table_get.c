#include "hash_tables.h"

/**
 * hash_table_get - function to get a value of a key in a hash table
 * @ht: type pointer const char of the hash_table
 * @key: type pointer char the key of the hash table
 * Return: Null if the key is not found or the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp_node;
	unsigned long int index;

	if (ht && key)
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			tmp_node = ht->array[index];
			while (tmp_node)
			{
				if (strcmp(tmp_node->key, (char *)key) == 0)
					return (tmp_node->value);
				tmp_node = tmp_node->next;
			}
		}
	}
	return (NULL);
}
