#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: return the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nod = 0;
	const listint_t *temp = head, *loopn = head;

	if (head == NULL)
	{
		return (nod);
	}

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *) temp, temp->n);
		temp = temp->next;
		nod++;

		if (temp >= loopn)
		{
			printf("-> [%p] %d\n", (void *) temp, temp->n);
		}

		loopn = (loopn == head) ? temp : loopn;
	}

	return (nod);
}
