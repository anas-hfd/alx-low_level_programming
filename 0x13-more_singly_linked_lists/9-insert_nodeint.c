#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: d ptr to head
 * @idx: where the new node should be added
 * @n: data
 * Return: new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *prevnode = NULL, *currentnode = *head;
	unsigned int i = 0;

	while (currentnode != NULL && i < idx)
	{
		prevnode = currentnode;
		currentnode = currentnode->next;
		i++;
	}
	if (i != idx)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = currentnode;
	if (prevnode == NULL)
	{
		*head = newnode;
	}
	else
	{
		prevnode->next = newnode;
	}
	return (newnode);
}
