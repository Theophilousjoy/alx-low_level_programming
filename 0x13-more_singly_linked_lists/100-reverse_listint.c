#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint - A program that reverses a linked list
 * @head: pointer towards the first node in the list
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->after = prev;
		previous = *head;
		*head = after;
	}

	*head = previous;

	return (*head);
}
