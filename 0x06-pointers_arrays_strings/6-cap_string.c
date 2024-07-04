#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
	if (c == separators[i])
		return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the resulting string `str`
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (is_separator(*ptr))
	{
	capitalize = 1;
	}
	else if (capitalize && *ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - ('a' - 'A');
	capitalize = 0;
	}
	else
	{
	capitalize = 0;
	}

	ptr++;
	}

	return (str);
}
