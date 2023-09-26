#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that delete the first element
 * of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer.
 */

int pop_listint(listint_t **head)
{
	listint_t *temps;
	int x;

	if (*head == NULL)
		return (0);

	temps = *head;
	*head = temps->next;
	x = temps->n;
	free(temps);
	return (x);
}
