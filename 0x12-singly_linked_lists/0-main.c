#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	unsigned long n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->str = strdup("New node");
	new->len = strlen(new->str);
	new->next = NULL;
	hello.next = new;

	n = (unsigned long)print_list(head);
	printf("Number of nodes: %lu\n", n);

	free(new->str);
	free(new);
	return (0);
}
