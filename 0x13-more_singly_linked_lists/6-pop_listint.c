#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head
 * @head: dptr list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		node = *head;
		*head = (*head)->next;
		n = node->n;
		free(node);
	}
	return (n);
}
