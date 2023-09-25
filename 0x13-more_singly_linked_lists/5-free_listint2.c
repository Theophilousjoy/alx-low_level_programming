#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*free_listint2 - A program that frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *pts;
	listint_t **frllist = head;

	if (frllist != NULL)
	{
		while (*head != NULL)

		{
			cursor = *head;
			free(pts);
			*head = (*head)->next;
		}
		*frllist = NULL;
	}
}
