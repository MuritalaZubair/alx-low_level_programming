#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[12];
	int i, sum, target;

	sum = 0;
	target = 2772;

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
	password[i] = rand() % 94 + 33;
	sum += password[i];
	}

	password[11] = target - sum;
	password[12] = '\0';

	printf("%s", password);

	return (0);
}
