#include "lists.h"

/**
 * free_listp2 - A function that frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - A function that frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nfn = 0;
	listp_t *hll, *nw, *add;
	listint_t *cnts;

	hll = NULL;
	while (*h != NULL)
	{
		nw = malloc(sizeof(listp_t));

		if (nw == NULL)
			exit(98);

		nw->p = (void *)*h;
		nw->next = hll;
		hll = nw;

		add = hll;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hll);
				return (nfn);
			}
		}

		cnts = *h;
		*h = (*h)->next;
		free(cnts);
		nfn++;
	}

	*h = NULL;
	free_listp2(&hll);
	return (nfn);
}
