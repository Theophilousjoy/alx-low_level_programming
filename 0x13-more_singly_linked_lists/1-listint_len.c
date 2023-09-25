#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *listint_len - A function that returns the number of elements
 *in a linked listint_t list
 *@h: A pointer to the head list
 *
 *
 *Return: the number of elements in nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nofnodes = 0;

	while (h)
	{
		nofnodes++;
		h = h->next;
	}
	return (nofnodes);
}
