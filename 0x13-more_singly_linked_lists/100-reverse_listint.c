#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - Reverses a list
* @head: d ptr to head
* Return: ptr to head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *after = NULL;

	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = after;
	}
	*head = first;
	return (*head);
}
