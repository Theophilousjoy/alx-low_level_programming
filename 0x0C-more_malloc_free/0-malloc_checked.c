#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A program that allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *all

	all = malloc(b);
	if (all == NULL)
		exit(98);
	return (all);
}
