#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that returns the n node
 * of a linked list
 * @head: pointer towards the head of the list
 * @idx: index of the added node
 * @n: new node content
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nwn = NULL;
	listint_t *prn = NULL;
	unsigned int x = 0;

	nwn = malloc(sizeof(listint_t));
	if (nwn == NULL || idx > listint_len(*head))
	{
		free(nwn);
		return (NULL);
	}
	nwn->n = n;
	nwn->next = NULL;
	while (head != NULL)
	{
		if (x == idx)
		{
			if (x == 0)
			{
				nwn->next = *head;
				*head = nwn;
				return (nwn);
			}
			nwn->next = prn->next;
			prn->next = nwn;
			return (nwn);
		}
		else if ((x + 1) == idx)
			prn = *head;
		head = &((*head)->next);
		x++;
	}
	return (NULL);
}

/**
 * listint_len - A function that counts the number of nodes in a linked list
 * @h: header of the linked list
 *
 * Return: the number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pts = h;
	size_t disp = 0;

	while (pts != NULL)
	{
		disp += 1;
		pts = pts->next;
	}
	return (disp);
}
