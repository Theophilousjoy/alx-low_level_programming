#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Write a funtion that frees a list.
 * @head: Address of the first node of a list.
 *
 * return: nothing to return
 */

void free_listint2(listint_t **head)
{
	listint_t *temps;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temps = (*head)->next;
		free(*head);
		*head = temps;
	}
}
