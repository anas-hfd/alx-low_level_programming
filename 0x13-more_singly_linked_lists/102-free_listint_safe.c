#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list of ints
 * @head: ptr to ptr to head
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **head)
{
	size_t n = 0;
	listint_t *node, *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	node = *head;

	while (node != NULL)
	{
		n++;
		tmp = node;
		node = node->next;
		free(tmp);
		if (tmp <= node)
			break;
	}
	*head = NULL;
	return (n);
}
