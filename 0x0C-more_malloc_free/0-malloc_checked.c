#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - A program that allocates memory using malloc
* @b: number of bytes to be allocated
*
* Return: allocated memory pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	
		exit(98);

	return (ptr);
}
