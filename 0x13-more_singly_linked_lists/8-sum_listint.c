#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums all nodes in a linked list
 * @head: pointer to linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *add = head;
	int sum = 0;


	while (add)
	{
		sum += add->n;
		add = add->next;
	}

	return (sum);

	if (add == NULL)
		return (0);
}
