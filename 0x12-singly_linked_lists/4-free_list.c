#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: ptr to the head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *curr_el;

	while ((curr_el = head) != NULL)
	{
		head = head->next;
		free(curr_el->str);
		free(curr_el);
	}
}
