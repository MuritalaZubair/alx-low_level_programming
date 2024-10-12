#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Set the size of the hash table */
    ht->size = size;

    /* Allocate memory for the array of pointers to hash nodes */
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);  /* Free the hash table structure if allocation fails */
        return (NULL);
    }

    /* Initialize each element in the array to NULL */
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}
