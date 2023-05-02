#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: ptr to head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node = head, *helper;

	while (node != NULL)
	{
		helper = node;

		node = node->next;
		free(helper);
	}
}
