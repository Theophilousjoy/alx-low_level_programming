#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list
 *@head: pointer to the head list
 *@str: added string
 *
 *Return: NULL if fail
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *nd;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	nd = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = nd;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
