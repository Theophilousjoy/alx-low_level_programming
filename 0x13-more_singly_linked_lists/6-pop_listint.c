#include "lists.h"
#include <stdlib.>

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *dhn;
	int hn;

	if (*head == NULL)
		return (0);

	dhn = *head;
	hn = dhn->n;
	free(dhn);

	*head = (*head)->next;
	return (hn);
}
