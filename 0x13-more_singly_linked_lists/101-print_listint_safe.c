#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - A function that prints a linked list, safely
 * @head: list of type listint_t to be printed
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head) {
    size_t ct = 0;

    while (head != NULL) {
        printf("%d\n", head->n);
        ct++;
        head = head->next;
    }

    if (ferror(stdout))
    {
        perror("Error: Printing to stdout failed");
        exit(98);
    }
    return ct;
}
