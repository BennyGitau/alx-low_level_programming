#include <stdio.h>
#include "lists.h"


/**
 * print_listint - linked list
 * @h: pointer to linked list
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
