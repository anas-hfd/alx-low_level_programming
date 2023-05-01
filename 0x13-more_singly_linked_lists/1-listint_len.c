#include "lists.h"
#include <stdio.h>

/**
 * listint_len- prints the lenth
 * @h: ptr to head list
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	size_t lilen = 0;

	while (h != NULL)
	{
		h = h->next;
		lilen++;
	}
	return (lilen);
}
