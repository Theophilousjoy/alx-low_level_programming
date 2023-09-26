#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - A function that adds a node to the end of a linked list
 *@head: pointer to the head of the linked list
 *@n: content number
 *
 *Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnode;
	listint_t *pts = *head;

	nwnode = malloc(sizeof(listint_t));
	if (nwnode != NULL)
	{
		nwnode->n = n;
		nwnode->next = NULL;
	}
	else
		return (NULL);
	if (pts != NULL)
	{
		while (pts->next != NULL)
			pts = pts->next;

		pts->next = nwnode;
	}
	else
		*head = nwnode;
	return (nwnode);
}
