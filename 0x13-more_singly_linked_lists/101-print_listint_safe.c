#include "lists.h"

/**
 * print_listint_safe - A function that prints a linked list with a loop safely.
 * @head: pointer to the first node of the linked list
 * Return: returns new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *ln = NULL;
	size_t counters = 0;
	size_t newnd;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		counters++;
		tmp = tmp->next;
		ln = head;
		newnd = 0;
		while (newnd < counter)
		{
			if (tmp == ln)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (counters);
			}
			ln = ln->next;
			newnd++;
		}
		if (!head)
			exit(98);
	}
	return (counters);
}
