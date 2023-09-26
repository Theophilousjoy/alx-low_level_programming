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
	listp_t *cnt;

	if (head != NULL)
	{
		cnt = *head;
		while ((temps = cnt) != NULL)
		{
			cnt = cnt->next;
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
	size_t nofnode = 0;
	listp_t *hll, *nw, *adds;

	hll = NULL;
	while (head != NULL)
	{
		nw = malloc(sizeof(listp_t));

		if (nw == NULL)
			exit(98);

		nw->p = (void *)head;
		nw->next = hll;
		hll = nw;

		adds = hll;

		while (sum->next != NULL)
		{
			adds = adds->next;
			if (head == adds->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hll);
				return (nofnode);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nofnode++;
	}

	free_listp(&hll);
	return (nofnode);
}
