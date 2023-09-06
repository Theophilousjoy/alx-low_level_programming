#include "main.h"
#include <stdlib.h>

/**
* free_grid - A program that frees a 2d array
* @grid: memory block
* @height:height of the array
* Return:returns void
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
