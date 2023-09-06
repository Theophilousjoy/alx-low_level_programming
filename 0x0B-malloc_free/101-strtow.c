#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* ch_free_grid - A program that frees a 2 dimensional array.
* @grid: multidimensional array of char.
* @height: height of the array.
*
* Return: no return
*/
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
* strtow - splits a string into words.
* @str: string.
*
* Return: pointer of an array of integers
*/
char **strtow(char *str)
{
	char **arr_out;
	unsigned int c, height, a, b, n1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	arr_out = malloc((height + 1) * sizeof(char *));
	if (arr_out == NULL || height == 0)
	{
		free(arr_out);
		return (NULL);
	}
	for (a = n1 = 0; a < height; a++)
	{
		for (c = n1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				n1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				arr_out[a] = malloc((c - n1 + 2) * sizeof(char));
				if (arr_out[a] == NULL)
				{
					ch_free_grid(arr_out, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; n1 <= c; n1++, b++)
			arr_out[a][b] = str[n1];
		arr_out[a][b] = '\0';
	}
	arr_out[a] = NULL;
	return (arr_out);
}
