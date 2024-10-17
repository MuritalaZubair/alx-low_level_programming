#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: Pointer to the hash table.
 * @key: The key to add; cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_dup;
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_dup = strdup(value);
	if (!value_dup)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (hash_node_t *node = ht->array[index]; node; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value_dup;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_dup);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		free(value_dup);
		return (0);
	}
	new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
