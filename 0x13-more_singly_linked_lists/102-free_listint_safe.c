#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t linked list
 * @h: pointer to the first node of the linked list
 *
 * Return: the size of the list that was to be free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nod = 0;
	listint_t *temps = NULL, *loopn = NULL;

	if (h == NULL)
	{
		return (nod);
	}

	loopn = *h;

	while (*h != NULL)
	{
		temps = (*h)->next;
		free(*h);
		nod++;

		if (temps >= loopn)
		{
			break;
		}

		loopn = (loopnode == *h) ? temps : loopn;
		*h = temps;
	}

	*h = NULL;

	return (nod);
}
