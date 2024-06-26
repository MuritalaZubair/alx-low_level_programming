#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to process
 */
void puts_half(char *str)
{
	int length = 0;
	int start, i;

	while (str[length] != '\0')
	{
	length++;
	}

	if (length % 2 == 0)
	{
	start = length / 2;
	}
	else
	{
	start = (length + 1) / 2;
	}

	for (i = start; i < length; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
