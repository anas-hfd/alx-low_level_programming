#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the begginig of the likned list
 * @head: the starting point of the  list
 * @str: data string
 * Return: the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newel = malloc(sizeof(list_t));
	size_t len;

	if (newel == NULL)
	{
		return (NULL);
	}
	else
	{
		newel->str = strdup(str);
		for (len = 0; str[len]; len++)
		{}
		newel->len = len;
		newel->next = *head;
		*head = newel;
	}
	return (*head);
}
