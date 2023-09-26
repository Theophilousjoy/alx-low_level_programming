#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: return the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nod = 0;
	const listint_t *temps = head, *loopnd = head;

	if (head == NULL)
	{
		return (nod);
	}
	while (temps != NULL)
	{
		printf("[%p] %d\n", (void *) temps, temps->n);
		temps = temps->next;
		nod++;

		if (temps >= loopnd)
		{
			printf("-> [%p] %d\n", (void *) temps, temps->n);
		}
		loopnd = (loopnd == head) ? temps : loopnd;
	}
	return (nod);
}
