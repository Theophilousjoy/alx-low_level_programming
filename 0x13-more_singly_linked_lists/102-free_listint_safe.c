#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: returns number of elements in the free list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int diff;
	listint_t *temps;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temps = (*h)->next;
			free(*h);
			*h = temps;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
