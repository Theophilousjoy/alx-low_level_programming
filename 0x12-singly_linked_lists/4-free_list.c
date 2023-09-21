#include "lists.h"

/**
 *free_list - A function that frees a list
 *@head: A pointer to the list head
 *
 */

void free_list(list_t *head)
{
	list_t *f_list;

	while (head)
	{
		f_list = head->next;
		free(head->str);
		free(head);
		head = f_list;
	}
}
