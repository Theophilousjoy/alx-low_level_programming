#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A program that allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: pointer to the allocated memory address
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
