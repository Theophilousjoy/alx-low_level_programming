#include "function_pointers.h"

/**
*int_index - A function that searches for an integer
*@array: Array of elements
*@size: number of elements in the array
*@cmp: function that compare values
*
*Return: returns -1 if no element is matched
*or when size is less than zero
*return pointer to the first matched element
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int list = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; list < size; list++)
	{
		if (cmp(array[list]) != 0)
			return (list);
	}

	return (-1);
}
