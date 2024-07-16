#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory allocated for a 2D array
 * @grid: pointer to the 2D array
 * @height: height of the grid (number of rows)
 *
 * Description: This function frees the memory allocated for each row of
 * the 2D array and then frees the memory allocated for the array of pointers.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
