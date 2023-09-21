#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a list
 *@head: pointer to the head list
 *@str: added string
 *
 * Return: returns the address to the new element
 * or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *nod;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	nod = strdup(str);
	if (nod == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = nod;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
