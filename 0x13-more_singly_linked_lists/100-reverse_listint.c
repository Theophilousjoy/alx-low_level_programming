#include "lists.h"

/**
 * reverse_listint - A program that reverses a linked list
 * @head: pointer towards the first node in the list
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *aft = NULL;

	while (*head)
	{
		aft = (*head)->next;
		(*head)->aft = prv;
		prv = *head;
		*head = aft;
	}

	*head = prv;

	return (*head);
}
