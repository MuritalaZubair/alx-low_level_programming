#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
	* check_num - checks if a string consists only of digits
	* @str: string to check
	*
	* Return: 1 if all characters are digits, 0 otherwise
	*/
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
	* main - Prints the sum of valid integer arguments
	* @argc: Number of arguments
	* @argv: Array of arguments
	*
	* Return: Always 0 (Success)
	*/
int main(int argc, char *argv[])
{
	int count, str_to_int, sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum);

	return (0);
}
