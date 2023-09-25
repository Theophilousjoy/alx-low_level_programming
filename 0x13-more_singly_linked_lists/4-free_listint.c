#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*free_listint - A program that frees a linked list
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *frllist;

	while (head != NULL)
{
	frllist = head;
	head = head->next;
	free(frllist);
}

