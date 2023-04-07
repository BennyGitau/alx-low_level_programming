#include <stdio.h>
#include "lists.h"

void rdisplay(listint_t *head);
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer
 * Return: returns a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	rdisplay(*head);
	return (*head);
}

/**
 * rdisplay - prints linked list
 * @head: pointer
 */
void rdisplay(listint_t *head)
{
	if (head != NULL)
	{
		rdisplay(head->next);
		printf("%d", head->n);
	}
}
