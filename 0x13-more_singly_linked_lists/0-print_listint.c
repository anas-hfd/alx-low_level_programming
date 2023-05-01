#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a list of ints
 * @h: ptr to the head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
