#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 *sum_listint - A function that sums up all the data in a linked list
 *@head: The header of the linked list
 *
 *Return: addition of the number
 */

int sum_listint(listint_t *head)
{
	listint_t *pts = head;
	size_t add = 0;

	while (cursor != NULL)
	{
		add += pts->n;
		pts = pts->next;
	}
	return (add);
}
