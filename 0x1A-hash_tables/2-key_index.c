#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 *              pair should be stored in an array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * 
 * Description: This function uses the djb2 algorithm to calculate
 * the hash of the key and then applies modulo operation with the
 * size of the hash table array to ensure the index is within bounds.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Calculate the hash value for the key using djb2 */
    unsigned long int hash_value = hash_djb2(key);

    /* Return the index by taking the hash value modulo the size */
    return (hash_value % size);
}
