#include "main.h"
#include <stdio.h>

/**
 * main - Check the reset_to_98 function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
