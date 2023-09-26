#include "lists.h"
#include <stdlib.h>

/**
*free_listint2 - A program that frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *pts;
	listint_t **frll = head;

	if (frll != NULL)
	{
		while (*head != NULL)

		{
			pts = *head;
			free(pts);
			*head = (*head)->next;
		}
		*frll = NULL;
	}
}
