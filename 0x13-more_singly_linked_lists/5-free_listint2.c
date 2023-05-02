#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: ptr to ptr of athe head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *helper;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		node = *head;
		while (node != NULL)
		{
			helper = node;
			node = node->next;
			free(helper);
		}
	}
	*head = NULL;
}
