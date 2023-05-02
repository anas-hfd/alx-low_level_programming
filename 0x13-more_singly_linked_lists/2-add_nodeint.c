#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - add an int nodde to the beggining
 * @head: list head
 * @n: int to store at the new node
 * Return: new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
