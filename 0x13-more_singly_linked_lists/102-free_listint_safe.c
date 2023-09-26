#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - A function that frees a linked list
 * @h: pointer to the first node of linked list
 *
 * Return: Return number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lgth = 0;
	int dst;
	listint_t *temps;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dst = *h - (*h)->next;
		if (dst > 0)
		{
			temps = (*h)->next;
			*h = temps;
			lgth++;
		}
		else
		{
			*h = NULL;
			lgth++;
			break;
		}
	}

	*h = NULL;

	return (lgth);
}
