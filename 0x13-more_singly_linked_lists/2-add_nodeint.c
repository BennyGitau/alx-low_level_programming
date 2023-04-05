#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -  adds not in a linked list
 * @head: pointer to pointer
 * @n: number of nodes
 * Return: success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	if (!new_node)
		return (NULL);

	return (new_node);
}
