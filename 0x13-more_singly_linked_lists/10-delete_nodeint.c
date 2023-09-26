#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes a node at an index
 * @head: pointer towards the head of the list
 * @index: index of the added node
 *
 * Return: the node address
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *odnode = NULL;
	listint_t *prnode = NULL;
	unsigned int x = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (x == index)
		{
			odnode = *head;
			if (x == 0)
			{
				*head = odnode->next;
				free(odnode);
				return (1);
			}
			prnode->next = odnode->next;
			free(odnode);
			return (1);
		}
		else if ((x + 1) == index)
			prnode = *head;
		head = &((*head)->next);
		x++;
	}
	return (-1);
}

/**
 * listint_len - A function that counts the number of nodes in a linked list
 * @h: header of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pts = h;
	size_t display = 0;

	while (pts != NULL)
	{
		display += 1;
		pts = pts->next;
	}
	return (display);
}
