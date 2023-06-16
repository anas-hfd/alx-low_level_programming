#include "lists.h"

/**
 * insert_dnodeint_at_index -> new node at a given position
 * @h: ptr to head
 * @idx: Index
 * @n: node data
 * Return: New Node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *x, *y, *node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	x = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (x == NULL)
			return (NULL);
		x = x->next;
	}
	if (x == NULL)
	{
		return (NULL);
	}
	if (x->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	y = x->next;
	x->next = node;
	node->prev = x;
	node->next = y;
	y->prev = node;
	node->n = n;
	return (node);
}
