#include "lists.h"

/**
 *dlistint_len - returns the len of a dll
 *@h: ptr to the head
 *Return: num of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	int i;

	for (i = 1; h != NULL; i++)
	{
		h = h->next;
		len = i;
	}
	return (len);
}
