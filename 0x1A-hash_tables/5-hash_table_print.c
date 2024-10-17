#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Description: Outputs key/value pairs in the order
 *              they appear in the array.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma_flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			comma_flag = 1;
		}
	}
	printf("}\n");
}
