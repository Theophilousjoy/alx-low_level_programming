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
	listp_t *cnts;

	if (head != NULL)
	{
		cnts = *head;
		while ((temps = cnts) != NULL)
		{
			cnts = cnts->next;
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
	size_t nfn = 0;
	listp_t *hll, *nw, *add;

	hll = NULL;
	while (head != NULL)
	{
		nw = malloc(sizeof(listp_t));

		if (nw == NULL)
			exit(98);

		nw->p = (void *)head;
		nw->next = hll;
		hll = nw;

		add = hll;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hll);
				return (nfn);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nfn++;
	}

	free_listp(&hll);
	return (nfn);
}
