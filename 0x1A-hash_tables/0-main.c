#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for hash table creation
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	/* Create a hash table with 1024 slots */
	ht = hash_table_create(1024);

	/* Print the pointer address of the newly created hash table */
	printf("%p\n", (void *)ht);

	return (EXIT_SUCCESS);
}
