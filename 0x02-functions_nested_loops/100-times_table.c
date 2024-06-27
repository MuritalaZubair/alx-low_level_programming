#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of the times table to print (0 <= n <= 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			print_result(result, j);
		}
		_putchar('\n');
	}
}

/**
 * print_result - prints the result with proper formatting
 * @result: the result to print
 * @column: the column index to determine formatting
 *
 * Return: void
 */
void print_result(int result, int column)
{
	if (column > 0)
	{
		_putchar(',');
		_putchar(' ');

		if (result >= 100)
		{
			_putchar('0' + result / 100);
			_putchar('0' + (result / 10) % 10);
		}
		else if (result >= 10)
		{
			_putchar(' ');
			_putchar('0' + result / 10);
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('0' + result % 10);
}
