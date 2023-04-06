#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - adds a node at nth position
 * and returns a pointer
 * @head: pointer to list
 * @idx: position
 * @n: value of the index
 * Return: a pointer or nothing if NULL
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *transv = *head;
	unsigned int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!*head || !new)
		return (NULL);

	/*assign value to new*/
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; transv && i < idx; i++)
	{
	if (i == idx - 1)
	{
		new->next = transv->next;
		transv->next = new;
		return (new);
	}
	else
		transv = transv->next;
	}
	return (NULL);
}
