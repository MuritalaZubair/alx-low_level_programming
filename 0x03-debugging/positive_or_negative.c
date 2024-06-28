#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * positive_or_negative - main function
 * @i : integer
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else if (i < 0)
		printf("%d is negative", i);
	printf("\n");
}
