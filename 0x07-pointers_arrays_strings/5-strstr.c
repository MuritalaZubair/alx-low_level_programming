#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *start_haystack = haystack;

	while (*haystack)
	{
	char *temp_haystack = haystack;
	char *temp_needle = needle;

	while (*temp_haystack && *temp_needle && *temp_haystack == *temp_needle)
	{
	temp_haystack++;
	temp_needle++;
	}

	if (!*temp_needle)
	return (start_haystack);

	haystack++;
	}

	return (NULL);
}
