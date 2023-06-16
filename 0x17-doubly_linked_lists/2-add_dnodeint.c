#include "lists.h"

/**
 *add_dnodeint - adds a node
 *@head: ptr to ptr to head
 *@n: node
 *Return: dll
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	if (head == NULL)
	{
		return (NULL);
	}
	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->prev = NULL;
	nnode->next =  *head;
	*head = nnode;
	return (nnode);
}
