#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - as the name shows
 * @head: ptr to head
 * @index: index
 * Return: corresponding node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = head;

	if (node == NULL)
	{
		return (NULL);
	}

	while (node != NULL)
	{
		if (count == index)
		{
			return (node);
		}
		count++;
		node = node->next;
	}
	return (NULL);
}
