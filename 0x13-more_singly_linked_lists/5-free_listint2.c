#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: ptr to ptr of athe head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			node = (*head)->next;
			free(*head);
			*head = node;
		}
	}
	*head = NULL;
}
