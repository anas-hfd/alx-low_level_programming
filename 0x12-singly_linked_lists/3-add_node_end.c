#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a noda at the end
 * @head: ptr to the head
 * @str: data str
 * Return: addr of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newel = malloc(sizeof(list_t)), *currel;
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
		newel->next = NULL;
		currel = *head;
		if (currel == NULL)
		{
			*head = newel;
		}
		else
		{
			while (currel->next != NULL)
			{
				currel = currel->next;
			}
			currel->next = newel;
		}
	}
	return(*head);
}
