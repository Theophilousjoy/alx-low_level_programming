#include "lists.h"
#include <stdlib.h>

/**
 * free_listp2 - A function that frees a linked list
 * @head: header  of the linked list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - A function that frees a linked list.
 * @h: header of the list.
 *
 * Return: size of the list that was to be freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nofnodes = 0;
	listp_t *hdptr, *new, *add;
	listint_t *cnt;

	hdptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hdptr;
		hdptr = new;

		add = hdptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hdptr);
				return (nofnodes);
			}
		}

		cnt = *h;
		*h = (*h)->next;
		free(cnt);
		nofnodes++;
	}

	*h = NULL;
	free_listp2(&hdptr);
	return (nofnodes);
}
