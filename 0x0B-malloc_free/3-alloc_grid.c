#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - A program that returns a pointer to a 2 dimensional
* array of integers.
* @width: width of the array.
* @height: height of the array.
*
* Return: pointer of an array of integers
*/
int **alloc_grid(int width, int height)
{
	int **all_grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	all_grid = malloc(height * sizeof(int *) * height);
	if (all_grid == NULL)
	{
		free(all_grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		all_grid[i] = malloc(width * sizeof(int) * width);
		if (all_grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(all_grid[i]);
			free(all_grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			all_grid[i][j] = 0;

	return (all_grid);
}
