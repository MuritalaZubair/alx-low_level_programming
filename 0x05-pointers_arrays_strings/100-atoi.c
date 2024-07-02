#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while (s[i] && (s[i] == ' ' || s[i] == '\t'))
	i++;

	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}
	while (s[i])
	{
	if (s[i] >= '0' && s[i] <= '9')
	{
	num = num * 10 + (s[i] - '0');
	}
	else
	{
	break;
	}
	i++;
	}

	return (num * sign);
}
