#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a node at the end
 * @head: the head of the list
 * @n: the int to store in the new node
 * Return: new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *currentnode;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head ==  NULL)
	{
		*head = new;
	}
	else
	{
		currentnode = *head;
		while (currentnode->next != NULL)
		{
			currentnode = currentnode->next;
		}
			currentnode->next = new;
	}
	return (new);
}
