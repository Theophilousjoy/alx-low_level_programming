#include "lists.h"
#include <stdlib.h>

/**
*free_listint - A program that frees a linked list
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *frll;

	while (head != NULL)
{
	frll = head;
	head = head->next;
	free(frll);
}

