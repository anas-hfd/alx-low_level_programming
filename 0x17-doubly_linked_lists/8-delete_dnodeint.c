#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: ptr to head
 * @index: Index
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *x, *y;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	x = *head;
	if (index == 0)
	{
		*head = x->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(x);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (x == NULL)
		{
			return (-1);
		}
		y = x;
		x = x->next;
	}
	y->next = x->next;
	if (x->next != NULL)
	{
		x->next->prev = y;
	}
	free(x);
	return (1);
}
