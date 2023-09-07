#include <stdlib.h>
#include "main.h"

/**
* *array_range - A program that creates an array of integers
* @min: minimum range
* @max: maximum range
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *arr;
	int x, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		arr[x] = min++;
	return (arr);
}
