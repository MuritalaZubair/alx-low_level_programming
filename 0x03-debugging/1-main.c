#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 * This function demonstrates an intentional infinite loop that has been
 * commented out to avoid running it.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

    /* Commented out to avoid the infinite loop */
    /*
     * i = 0;

     * while (i < 10)
     * {
     *     putchar(i);
     * }
     */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
