#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. C o w s.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
