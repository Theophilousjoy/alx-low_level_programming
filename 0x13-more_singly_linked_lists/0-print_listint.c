#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *lst = h;
	size_t  cnts = 0;

	while (lst != NULL)
	{
		printf("%d\n", cursor->n);
		cnts += 1;
		lst = lst->next;
	}
	return (cnts);
}
