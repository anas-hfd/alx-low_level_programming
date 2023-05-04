#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in the list
 * @head: ptr to head
 * Return: addr of node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head;

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			break;
		}
	}
	if (s != f)
	{
		return (NULL);
	}
	s = head;
	while (s != f)
	{
		s = s->next;
		f = f->next;
	}
	return (s);
}
