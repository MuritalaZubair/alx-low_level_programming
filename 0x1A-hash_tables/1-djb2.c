#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Description: This function takes a string as input and generates
 * a hash value using the djb2 algorithm. The initial hash value is set to 5381,
 * and for each character in the string, it updates the hash value as:
 * hash = hash * 33 + current_character.
 *
 * Return: The calculated hash value as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    /* Start with an initial hash value of 5381 */
    hash = 5381;

    /* Loop through each character in the string */
    while ((c = *str++))
    {
        /* Shift hash left by 5 bits (equivalent to multiplying by 32)
         * then add the current hash, effectively multiplying hash by 33
         * and finally add the current character to the hash.
         */
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    /* Return the resulting hash value */
    return (hash);
}
