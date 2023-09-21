#include "lists.h"

/**
 * list_len - A program that finds the number of elements in a linked list
 *@h: pointer to the linked list
 *
 *Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t elements_num = 0;

	while (h)
	{
		elements_num++;
		h = h->next;
	}

	return (elements_num);
}
