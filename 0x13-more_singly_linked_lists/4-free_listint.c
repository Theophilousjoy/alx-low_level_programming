#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list.
 * @head: Address of the first node of a list.
 *
 * return: nothing to return
 */

void free_listint(listint_t *head)
{
	listint_t *l1, *l2;

	l1 = head;
	while (l1 != NULL)
	{
		l2 = l1->next;
		free(l1);
		l1 = l2;
	}
}
