#include "lists.h"

/**
 * free_listp - A function that frees a linked list
 * @head: header of linked list.
 *
 * Return: nothing to return.
 */
void free_listp(listp_t **head)
{
	listp_t *temps;
	listp_t *curs;

	if (head != NULL)
	{
		curs = *head;
		while ((temps = cnts) != NULL)
		{
			curs= curs->next;
			free(temps);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - A function that prints a linked list.
 * @head: header of the linked list
 *
 * Return: number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *hptr, *new, *add;

	hll = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	free_listp(&hptr);
	return (node);
}
