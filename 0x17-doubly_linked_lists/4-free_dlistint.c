#include "lists.h"

/**
 * free_dlistint - free a dllist
 * @head: tr to head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nn;

	while (head != NULL)
	{
		nn = head->next;
		free(head);
		head = nn;
	}
}
