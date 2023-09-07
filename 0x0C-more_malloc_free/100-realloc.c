#include <stdlib.h>
#include "main.h"

/**
* *_realloc - A program to reallocates a memory block using malloc and free
* @ptr: pointer memory previsouly allocated
* @old_size: size allocated memory for ptr
* @new_size: new size of the memory block
*
* Return: newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nw_ptr;
	char *od_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	nw_ptr = malloc(new_size);
	if (!nw_ptr)
		return (NULL);
	od_ptr = ptr;
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			nw_ptr[x] = od_ptr[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			nw_ptr[x] = od_ptr[x];
	}
	free(ptr);
	return (nw_ptr);
}
