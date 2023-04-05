#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node
 * @head: pointer to linked lit
 * Return: deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *transv;
	int d;

	if (!head || !*head)
		return (0);

	d = (*head)->n;
	transv = (*head)->next;
	free(*head);
	*head = transv;

	return (d);
}
