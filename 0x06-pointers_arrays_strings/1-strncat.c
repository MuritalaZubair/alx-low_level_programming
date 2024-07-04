#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
	ptr++;
	}

	while (n-- > 0 && *src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}

	*ptr = '\0';

	return (dest);
}
