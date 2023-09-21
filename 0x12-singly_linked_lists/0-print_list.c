#include "lists.h"

/**
* print_list - A program that prints all the elements of a list
*
* @h:pointer to the listed elements
*
*Return: nodes number
*/

size_t print_list(const list_t *h)
{
	const list_t *point = h;
	size_t counter = 0;

	while (point != NULL)
	{
		if (point->str != NULL)
			printf("[%d] %s\n", point->len, point->str);
		else
			printf("[0] (nil)\n");
		counter += 1;
		point = point->next;
	}

	return (counter);
}
