#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at pos n
 * @head: pointer to a pointer
 * @index: position of the node
 * Return: 1 for success and -1 for fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *first = NULL;
	unsigned int i = 0;

	if (p == NULL)
	{
		return (-1);
	}
	if (p == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (i < index - 1)
	{
		if (!p || !(p->next))
		{
			return (-1);
			p = p->next;
			i++;
		}

		first = p->next;
		p->next = first->next;
		free(first);

		return (1);
	}
}
