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
	listint_t *nnd;

	nnd = malloc(sizeof(listint_t));
	if (nnd == NULL)
		return (NULL);

	nnd->n = n;
	nnd->next = *head;
	*head = nnd;
	return (*head);
}
