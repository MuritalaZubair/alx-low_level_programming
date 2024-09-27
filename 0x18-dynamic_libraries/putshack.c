#include <stdio.h>
#include <stdlib.h>

int counter = 0;

int rand() {
	int nums[] = {9, 8, 10, 24, 75, 9};
	return nums[counter++ % 6];
}
