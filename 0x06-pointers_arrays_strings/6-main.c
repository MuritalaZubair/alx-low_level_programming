#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Et. P f t w. C.\nhlo wd! h-world world\the wd.hell wd\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
