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
	listint_t *dhnode;
	int hnode;

	if (*head == NULL)
		return (0);

	dhnode = *head;
	hnode = dhnode->n;
	free(dhnode);

	*head = (*head)->next;
	return (hnode);
}
