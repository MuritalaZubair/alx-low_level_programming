#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	listint_t *head;

	setup_list(&head);
	print_and_delete(&head, 5);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);

	return (0);
}

/**
 * setup_list - Initializes a linked list with sample data.
 * @head: Pointer to the head of the list to be set up.
 */
void setup_list(listint_t **head)
{
	*head = NULL;
	add_nodeint_end(head, 0);
	add_nodeint_end(head, 1);
	add_nodeint_end(head, 2);
	add_nodeint_end(head, 3);
	add_nodeint_end(head, 4);
	add_nodeint_end(head, 98);
	add_nodeint_end(head, 402);
	add_nodeint_end(head, 1024);
	print_listint(*head);
}

/**
 * print_and_delete - Prints the linked list, deletes a node at a given index,
 * and prints the updated list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to be deleted.
 */
void print_and_delete(listint_t **head, unsigned int index)
{
	print_listint(*head);
	printf("-----------------\n");
	delete_nodeint_at_index(head, index);
}
