#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: pointer to the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *transv;

	if (head == NULL)
		return;

	while (*head)
	{
		transv = (*head)->next;
		free(*head);
		*head = transv;
	}

	*head = NULL;
}
