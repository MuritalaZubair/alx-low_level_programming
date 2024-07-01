#include "main.h"

/**
 * _strcpy -Copies the string pointed to by src to buffer pointed to by dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < 1 ; x++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
