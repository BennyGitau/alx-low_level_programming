#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to linked list
 * @index: index of the node
 *
 * Return: success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *transv = head;
	unsigned int i = 0;

	while (transv && i < index)
	{
		transv = transv->next;
		i++;
	}
	if (!transv)
		return NULL;

	return (transv);
}
