#include "lists.h"
#include <stdlib.h>

/**
 * free_listp - A function that frees a linked list
 * @head: header of the linked list
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *tmps;
	listp_t *cnt;

	if (head != NULL)
	{
		cnt = *head;
		while ((tmps = cnt) != NULL)
		{
			cnt = cnt->next;
			free(tmps);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - A function that prints a linked list.
 * @head: head of a list.
 *
 * Return: returns number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nofnodes = 0;
	listp_t *hdptr, *new, *add;

	hdptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hdptr;
		hdptr = new;

		add = hdptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hdptr);
				return (nofnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nofnodes++;
	}

	free_listp(&hdptr);
	return (nofnodes);
}
