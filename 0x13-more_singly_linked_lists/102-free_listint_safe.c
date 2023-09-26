#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a listint_t linked list
 * @h: pointer to the first node of the linked list
 *
 * Return: the size of the list that was to be free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nod = 0;
	listint_t *temps = NULL, *loopnd = NULL;

	if (h == NULL)
	{
		return (nod);
	}

	loopnd = *h;

	while (*h != NULL)
	{
		temps = (*h)->next;
		free(*h);
		nod++;

		if (temps >= loopnd)
		{
			break;
		}

		loopnd = (loopnd == *h) ? temps : loopnd;
		*h = temps;
	}

	*h = NULL;

	return (nod);
}
