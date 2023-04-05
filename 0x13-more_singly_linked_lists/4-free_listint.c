#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: pointer to the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *transv;

	while (head)
	{
		transv = head->next;
		free(head);
		head = transv;
	}
}

