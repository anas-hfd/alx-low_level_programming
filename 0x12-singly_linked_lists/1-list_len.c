#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the num of nodes
 * @h: the linked list
 * Return: the num of nodes
 */

size_t list_len(const list_t *h)
{
	size_t len;
	const list_t *head  = h;

	while (head != NULL)
	{
		len++;
		head = head->next;
	}
	return (len);
}
