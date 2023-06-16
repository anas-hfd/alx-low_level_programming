#include "lists.h"

/**
 *add_dnodeint - adds a node
 *@head: ptr to ptr to head
 *@n: node
 *Return: dll
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	if (node->next != NULL)
	{
		(node->next)->prev = node;
	}
	return (node);
}
