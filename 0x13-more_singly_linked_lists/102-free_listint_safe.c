#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - A function that  frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: returns number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ct = 0;
	listint_t *curr = *h;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
		ct++;
	}
	*h = NULL;
	return ct;
}
