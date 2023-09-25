#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - A function that add a new node at the beginning of a list.
 * @head: header of the first node of a list.
 * @n: Integer for the new node.
 * Return: Returns Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwnode;

	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
		return (NULL);

	nwnode->n = n;
	nwnode->next = *head;
	*head = nwnode;
	return (*head);
}
