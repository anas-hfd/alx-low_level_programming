#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: d ptr to head
 * @index: index
 * Return: 1 or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *node;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	node = current->next;
	current->next = node->next;
	free(node);
	return (1);
}
