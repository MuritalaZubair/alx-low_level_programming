#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: Pointer to the string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
	putchar(*str++);
	}
	putchar('\n');
}
