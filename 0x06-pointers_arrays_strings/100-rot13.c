#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; alphabet[j] != '\0'; j++)
	{
	if (str[i] == alphabet[j])
	{
	str[i] = rot13[j];
	break;
	}
	}
	}
	return (str);
}
